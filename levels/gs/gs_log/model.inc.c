Lights1 gs_log_ki_side1_f3d_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFE, 0xFE, 0xFE, 0x28, 0x28, 0x28);

Lights1 gs_log_nenrin_f3d_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFE, 0xFE, 0xFE, 0x28, 0x28, 0x28);

Gfx gs_log_ki_02_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 gs_log_ki_02_rgba16[] = {
	#include "levels/gs/ki_02.rgba16.inc.c"
};

Gfx gs_log_nenrin_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 gs_log_nenrin_rgba16[] = {
	#include "levels/gs/nenrin.rgba16.inc.c"
};

Vtx gs_log_world_root_mesh_vtx_cull[8] = {
	{{{-271, -1659, -298},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{-271, -1659, 271},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{-271, 141, 271},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{-271, 141, -298},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{271, -1659, -298},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{271, -1659, 271},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{271, 141, 271},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{271, 141, -298},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
};

Vtx gs_log_world_root_mesh_vtx_0[32] = {
	{{{-112, 141, -298},0, {8176, 12272},{0x0, 0x0, 0x81, 0xFF}}},
	{{{112, 141, -298},0, {7152, 12272},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-112, -1659, -298},0, {8176, -16},{0x0, 0x0, 0x81, 0xFF}}},
	{{{112, -1659, -298},0, {7152, -16},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-112, -1659, -298},0, {-16, -16},{0xA4, 0x0, 0xA9, 0xFF}}},
	{{{-271, -1659, -131},0, {1008, -16},{0xA4, 0x0, 0xA9, 0xFF}}},
	{{{-112, 141, -298},0, {-16, 12272},{0xA4, 0x0, 0xA9, 0xFF}}},
	{{{-271, 141, -131},0, {1008, 12272},{0xA4, 0x0, 0xA9, 0xFF}}},
	{{{271, 141, 105},0, {5104, 12272},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{271, -1659, -131},0, {6128, -16},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{271, 141, -131},0, {6128, 12272},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{271, -1659, 105},0, {5104, -16},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{112, -1659, -298},0, {7152, -16},{0x5C, 0x0, 0xA9, 0xFF}}},
	{{{271, 141, -131},0, {6128, 12272},{0x5C, 0x0, 0xA9, 0xFF}}},
	{{{271, -1659, -131},0, {6128, -16},{0x5C, 0x0, 0xA9, 0xFF}}},
	{{{112, 141, -298},0, {7152, 12272},{0x5C, 0x0, 0xA9, 0xFF}}},
	{{{112, 141, 271},0, {4080, 12272},{0x5C, 0x0, 0x57, 0xFF}}},
	{{{271, -1659, 105},0, {5104, -16},{0x5C, 0x0, 0x57, 0xFF}}},
	{{{271, 141, 105},0, {5104, 12272},{0x5C, 0x0, 0x57, 0xFF}}},
	{{{112, -1659, 271},0, {4080, -16},{0x5C, 0x0, 0x57, 0xFF}}},
	{{{-112, 141, 271},0, {3056, 12272},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{112, -1659, 271},0, {4080, -16},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{112, 141, 271},0, {4080, 12272},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-112, -1659, 271},0, {3056, -16},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-271, 141, 105},0, {2032, 12272},{0xA4, 0x0, 0x57, 0xFF}}},
	{{{-112, -1659, 271},0, {3056, -16},{0xA4, 0x0, 0x57, 0xFF}}},
	{{{-112, 141, 271},0, {3056, 12272},{0xA4, 0x0, 0x57, 0xFF}}},
	{{{-271, -1659, 105},0, {2032, -16},{0xA4, 0x0, 0x57, 0xFF}}},
	{{{-271, 141, -131},0, {1008, 12272},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-271, -1659, 105},0, {2032, -16},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-271, 141, 105},0, {2032, 12272},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-271, -1659, -131},0, {1008, -16},{0x81, 0x0, 0x0, 0xFF}}},
};

Gfx gs_log_world_root_mesh_tri_0[] = {
	gsSPVertex(gs_log_world_root_mesh_vtx_0 + 0, 32, 0),
	gsSP2Triangles(0, 1, 2, 0, 3, 2, 1, 0),
	gsSP2Triangles(4, 5, 6, 0, 7, 6, 5, 0),
	gsSP2Triangles(8, 9, 10, 0, 9, 8, 11, 0),
	gsSP2Triangles(12, 13, 14, 0, 13, 12, 15, 0),
	gsSP2Triangles(16, 17, 18, 0, 17, 16, 19, 0),
	gsSP2Triangles(20, 21, 22, 0, 21, 20, 23, 0),
	gsSP2Triangles(24, 25, 26, 0, 25, 24, 27, 0),
	gsSP2Triangles(28, 29, 30, 0, 29, 28, 31, 0),
	gsSPEndDisplayList(),
};Vtx gs_log_world_root_mesh_vtx_1[17] = {
	{{{-271, 141, -131},0, {12272, 2032},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-271, 141, 105},0, {13296, 2032},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{0, 141, -13},0, {12784, -16},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-112, 141, 271},0, {14320, 2032},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{0, 141, -13},0, {13808, -16},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{112, 141, -298},0, {10224, 2032},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-112, 141, -298},0, {11248, 2032},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{0, 141, -13},0, {10736, -16},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{0, 141, -13},0, {11760, -16},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{271, 141, 105},0, {16368, 2032},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{271, 141, -131},0, {17392, 2032},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{0, 141, -13},0, {16880, -16},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{112, 141, -298},0, {18416, 2032},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{0, 141, -13},0, {17904, -16},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{112, 141, 271},0, {15344, 2032},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{0, 141, -13},0, {14832, -16},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{0, 141, -13},0, {15856, -16},{0x0, 0x7F, 0x0, 0xFF}}},
};

Gfx gs_log_world_root_mesh_tri_1[] = {
	gsSPVertex(gs_log_world_root_mesh_vtx_1 + 0, 17, 0),
	gsSP2Triangles(0, 1, 2, 0, 1, 3, 4, 0),
	gsSP2Triangles(5, 6, 7, 0, 6, 0, 8, 0),
	gsSP2Triangles(9, 10, 11, 0, 10, 12, 13, 0),
	gsSP2Triangles(3, 14, 15, 0, 14, 9, 16, 0),
	gsSPEndDisplayList(),
};


Gfx mat_gs_log_ki_side1_f3d[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, gs_log_ki_02_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0),
	gsDPLoadSync(),
	gsDPLoadTile(7, 0, 0, 252, 252),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0),
	gsDPSetTileSize(0, 0, 0, 252, 252),
	gsSPSetLights1(gs_log_ki_side1_f3d_lights),
	gsSPEndDisplayList(),
};


Gfx mat_gs_log_nenrin_f3d[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, gs_log_nenrin_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0),
	gsDPLoadSync(),
	gsDPLoadTile(7, 0, 0, 252, 252),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0),
	gsDPSetTileSize(0, 0, 0, 252, 252),
	gsSPSetLights1(gs_log_nenrin_f3d_lights),
	gsSPEndDisplayList(),
};


Gfx gs_log_world_root_mesh[] = {
	gsSPClearGeometryMode(G_LIGHTING),
	gsSPVertex(gs_log_world_root_mesh_vtx_cull + 0, 8, 0),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPCullDisplayList(0, 7),
	gsSPDisplayList(mat_gs_log_ki_side1_f3d),
	gsSPDisplayList(gs_log_world_root_mesh_tri_0),
	gsSPDisplayList(mat_gs_log_nenrin_f3d),
	gsSPDisplayList(gs_log_world_root_mesh_tri_1),
	gsSPEndDisplayList(),
};



Gfx gs_log_material_revert_render_settings[] = {
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};
