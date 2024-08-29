import struct

# Magic string "LESS_IS_MORE\0" (13 bytes)
magic = b"LESS_IS_MORE\0"

# Version number 1.0 encoded as 100 (4 bytes, uint32)
version = 100

# Vertex data: float32 (4 bytes per coordinate, total 12 bytes per vertex)
vertex_size_bits = 32  # 32 bits = float32

# Define the 8 vertices of a cube (x, y, z)
vertices = [
    (-1.0, -1.0, -1.0),
    ( 1.0, -1.0, -1.0),
    ( 1.0,  1.0, -1.0),
    (-1.0,  1.0, -1.0),
    (-1.0, -1.0,  1.0),
    ( 1.0, -1.0,  1.0),
    ( 1.0,  1.0,  1.0),
    (-1.0,  1.0,  1.0),
]

# Number of vertices (4 bytes, uint32)
num_vertices = len(vertices)

# Index data: uint32 (4 bytes per index)
index_size_bits = 32  # 32 bits = uint32

# Define the 12 triangles of a cube using vertex indices
indices = [
    0, 1, 2,  0, 2, 3,  # Front face
    4, 5, 6,  4, 6, 7,  # Back face
    0, 1, 5,  0, 5, 4,  # Bottom face
    2, 3, 7,  2, 7, 6,  # Top face
    0, 3, 7,  0, 7, 4,  # Left face
    1, 2, 6,  1, 6, 5,  # Right face
]

# Number of triangles (4 bytes, uint32)
num_triangles = len(indices) // 3

# Write the m3d file
with open("cube.m3d", "wb") as f:
    # Write the format header
    f.write(magic)
    f.write(struct.pack("I", version))
    
    # Write the data header
    f.write(struct.pack("B", vertex_size_bits))
    f.write(struct.pack("I", num_vertices))
    f.write(struct.pack("B", index_size_bits))
    f.write(struct.pack("I", num_triangles))
    
    # Write the vertex buffer
    for vertex in vertices:
        f.write(struct.pack("fff", *vertex))
    
    # Write the index buffer
    for index in indices:
        f.write(struct.pack("I", index))

print("m3d file successfully generated")
