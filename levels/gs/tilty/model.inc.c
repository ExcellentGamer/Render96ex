Lights1 tilty_bottom_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFE, 0xFE, 0xFE, 0x28, 0x28, 0x28);

Lights1 tilty_top_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFE, 0xFE, 0xFE, 0x28, 0x28, 0x28);

Gfx tilty_isi_c_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 tilty_isi_c_rgba16[] = {
	#include "levels/gs/isi_c.rgba16.inc.c"
};

Gfx tilty_tetuita_3_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 tilty_tetuita_3_rgba16[] = {
	#include "levels/gs/tetuita_3.rgba16.inc.c"
};

Vtx tilty_tilty_mesh_vtx_cull[8] = {
	{{{-306, 0, -306},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{-306, 0, 306},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{-306, 306, 306},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{-306, 306, -306},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{306, 0, -306},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{306, 0, 306},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{306, 306, 306},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{306, 306, -306},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
};

Vtx tilty_tilty_mesh_vtx_0[12] = {
	{{{0, 0, 0},0, {1968, -1008},{0x0, 0xA6, 0x5A, 0xFF}}},
	{{{306, 306, 306},0, {-80, -3056},{0x0, 0xA6, 0x5A, 0xFF}}},
	{{{-306, 306, 306},0, {-80, 1040},{0x0, 0xA6, 0x5A, 0xFF}}},
	{{{0, 0, 0},0, {1968, -1008},{0x5A, 0xA6, 0x0, 0xFF}}},
	{{{306, 306, -306},0, {4016, -3056},{0x5A, 0xA6, 0x0, 0xFF}}},
	{{{306, 306, 306},0, {-80, -3056},{0x5A, 0xA6, 0x0, 0xFF}}},
	{{{0, 0, 0},0, {1968, -1008},{0x0, 0xA6, 0xA6, 0xFF}}},
	{{{-306, 306, -306},0, {4016, 1040},{0x0, 0xA6, 0xA6, 0xFF}}},
	{{{306, 306, -306},0, {4016, -3056},{0x0, 0xA6, 0xA6, 0xFF}}},
	{{{0, 0, 0},0, {1968, -1008},{0xA6, 0xA6, 0x0, 0xFF}}},
	{{{-306, 306, 306},0, {-80, 1040},{0xA6, 0xA6, 0x0, 0xFF}}},
	{{{-306, 306, -306},0, {4016, 1040},{0xA6, 0xA6, 0x0, 0xFF}}},
};

Gfx tilty_tilty_mesh_tri_0[] = {
	gsSPVertex(tilty_tilty_mesh_vtx_0 + 0, 12, 0),
	gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
	gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
	gsSPEndDisplayList(),
};Vtx tilty_tilty_mesh_vtx_1[4] = {
	{{{-306, 306, 306},0, {2032, 4080},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{306, 306, 306},0, {2032, 2032},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-306, 306, -306},0, {-16, 4080},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{306, 306, -306},0, {2032, 4080},{0x0, 0x7F, 0x0, 0xFF}}},
};

Gfx tilty_tilty_mesh_tri_1[] = {
	gsSPVertex(tilty_tilty_mesh_vtx_1 + 0, 4, 0),
	gsSP2Triangles(0, 1, 2, 0, 3, 2, 1, 0),
	gsSPEndDisplayList(),
};


Gfx mat_tilty_bottom[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, tilty_isi_c_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPLoadSync(),
	gsDPLoadTile(7, 0, 0, 124, 124),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPSetLights1(tilty_bottom_lights),
	gsSPEndDisplayList(),
};


Gfx mat_tilty_top[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, tilty_tetuita_3_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0, G_TX_WRAP | G_TX_MIRROR, 5, 0),
	gsDPLoadSync(),
	gsDPLoadTile(7, 0, 0, 124, 252),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0, G_TX_WRAP | G_TX_MIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 252),
	gsSPSetLights1(tilty_top_lights),
	gsSPEndDisplayList(),
};


Gfx tilty_tilty_mesh[] = {
	gsSPClearGeometryMode(G_LIGHTING),
	gsSPVertex(tilty_tilty_mesh_vtx_cull + 0, 8, 0),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPCullDisplayList(0, 7),
	gsSPDisplayList(mat_tilty_bottom),
	gsSPDisplayList(tilty_tilty_mesh_tri_0),
	gsSPDisplayList(mat_tilty_top),
	gsSPDisplayList(tilty_tilty_mesh_tri_1),
	gsSPEndDisplayList(),
};



Gfx tilty_material_revert_render_settings[] = {
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};
