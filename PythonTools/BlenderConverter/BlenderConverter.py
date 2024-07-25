import bpy
import bmesh

# Open a .blend file
bpy.ops.wm.open_mainfile(filepath="path/to/your/file.blend")

# Get the mesh data from the first object in the scene
obj = bpy.data.objects['YourObjectName']

if obj.type == 'MESH':
    mesh = obj.data
    bm = bmesh.new()
    bm.from_mesh(mesh)

    # Vertex coordinates
    vertex_array = [v.co[:] for v in bm.verts]

    # Vertex indices for faces
    vertex_index_array = [[v.index for v in f.verts] for f in bm.faces]

    # Normal vectors
    normal_array = [v.normal[:] for v in bm.verts]

    # Texture coordinates (UVs)
    uv_layer = bm.loops.layers.uv.active
    texture_index_array = []
    if uv_layer:
        for f in bm.faces:
            face_uvs = []
            for loop in f.loops:
                uv = loop[uv_layer].uv
                face_uvs.append((uv.x, uv.y))
            texture_index_array.append(face_uvs)

    bm.free()

    print("Vertices:", vertex_array)
    print("Vertex Indices:", vertex_index_array)
    print("Normals:", normal_array)
    print("Texture Indices:", texture_index_array)
else:
    print("Selected object is not a mesh.")
