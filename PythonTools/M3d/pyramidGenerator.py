import struct

# Magic string "LESS_IS_MORE\0" (13 bytes)
magic = b"LESS_IS_MORE\0"

# Version number 1.0 encoded as 100 (4 bytes, uint32)
version = 100

# Vertex data: float32 (4 bytes per coordinate, total 12 bytes per vertex)
vertex_size_bits = 32  # 32 bits = float32

# Define the 5 vertices of a square-based pyramid (x, y, z)
vertices = [
    (-1.0, -1.0, -1.0),  # Bottom-left of the base
    ( 1.0, -1.0, -1.0),  # Bottom-right of the base
    ( 1.0, -1.0,  1.0),  # Top-right of the base
    (-1.0, -1.0,  1.0),  # Top-left of the base
    ( 0.0,  1.0,  0.0),  # Apex (top of the pyramid)
]

# Number of vertices (4 bytes, uint32)
num_vertices = len(vertices)

# Index data: uint32 (4 bytes per index)
index_size_bits = 32  # 32 bits = uint32

# Define the 6 triangles of the pyramid using vertex indices
indices = [
    # Base (2 triangles)
    0, 1, 2,  0, 2, 3,
    # Faces (4 triangles)
    0, 1, 4,  # Front face
    1, 2, 4,  # Right face
    2, 3, 4,  # Back face
    3, 0, 4,  # Left face
]

# Number of triangles (4 bytes, uint32)
num_triangles = len(indices) // 3

# Write the m3d file
with open("pyramid.m3d", "wb") as f:
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

print("Arquivo m3d 'pyramid.m3d' gerado com sucesso.")
