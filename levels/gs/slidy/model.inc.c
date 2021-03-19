Lights1 slidy_mar_yuka01_f3d_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFE, 0xFE, 0xFE, 0x28, 0x28, 0x28);

Lights1 slidy_mat_wood_side_f3d_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFE, 0xFE, 0xFE, 0x28, 0x28, 0x28);

Gfx slidy_emm_yuka01_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 slidy_emm_yuka01_rgba16[] = {
	#include "levels/gs/emm_yuka01.rgba16.inc.c"
};

Gfx slidy_wood_side_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 slidy_wood_side_rgba16[] = {
	#include "levels/gs/wood_side.rgba16.inc.c"
};

Vtx slidy_world_root_mesh_vtx_cull[8] = {
	{{{-160, 121, -163},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{-160, 121, 160},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{-160, 283, 160},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{-160, 283, -163},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{163, 121, -163},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{163, 121, 160},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{163, 283, 160},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{163, 283, -163},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
};

Vtx slidy_world_root_mesh_vtx_0[4] = {
	{{{163, 283, 160},0, {1008, -16},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{163, 283, -163},0, {1008, 1008},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-160, 283, 160},0, {-16, -16},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-160, 283, -163},0, {-16, 1008},{0x0, 0x7F, 0x0, 0xFF}}},
};

Gfx slidy_world_root_mesh_tri_0[] = {
	gsSPVertex(slidy_world_root_mesh_vtx_0 + 0, 4, 0),
	gsSP2Triangles(0, 1, 2, 0, 3, 2, 1, 0),
	gsSPEndDisplayList(),
};Vtx slidy_world_root_mesh_vtx_1[20] = {
	{{{-160, 121, -163},0, {1008, -16},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-160, 121, 160},0, {-16, -16},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-160, 283, 160},0, {-16, 1008},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-160, 283, -163},0, {1008, 1008},{0x81, 0x0, 0x0, 0xFF}}},
	{{{163, 121, 160},0, {1008, -16},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-160, 283, 160},0, {-16, 1008},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-160, 121, 160},0, {-16, -16},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{163, 283, 160},0, {1008, 1008},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{163, 121, -163},0, {-16, -16},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{163, 283, 160},0, {1008, 1008},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{163, 121, 160},0, {1008, -16},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{163, 283, -163},0, {-16, 1008},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{-160, 121, -163},0, {1008, -16},{0x0, 0x0, 0x81, 0xFF}}},
	{{{163, 283, -163},0, {-16, 1008},{0x0, 0x0, 0x81, 0xFF}}},
	{{{163, 121, -163},0, {-16, -16},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-160, 283, -163},0, {1008, 1008},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-160, 121, -163},0, {-16, -16},{0x0, 0x81, 0x0, 0xFF}}},
	{{{163, 121, -163},0, {1008, -16},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-160, 121, 160},0, {-16, 894},{0x0, 0x81, 0x0, 0xFF}}},
	{{{163, 121, 160},0, {1008, 894},{0x0, 0x81, 0x0, 0xFF}}},
};

Gfx slidy_world_root_mesh_tri_1[] = {
	gsSPVertex(slidy_world_root_mesh_vtx_1 + 0, 20, 0),
	gsSP2Triangles(0, 1, 2, 0, 2, 3, 0, 0),
	gsSP2Triangles(4, 5, 6, 0, 5, 4, 7, 0),
	gsSP2Triangles(8, 9, 10, 0, 9, 8, 11, 0),
	gsSP2Triangles(12, 13, 14, 0, 13, 12, 15, 0),
	gsSP2Triangles(16, 17, 18, 0, 19, 18, 17, 0),
	gsSPEndDisplayList(),
};


Gfx mat_slidy_mar_yuka01_f3d[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, slidy_emm_yuka01_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPLoadSync(),
	gsDPLoadTile(7, 0, 0, 124, 124),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPSetLights1(slidy_mar_yuka01_f3d_lights),
	gsSPEndDisplayList(),
};


Gfx mat_slidy_mat_wood_side_f3d[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, slidy_wood_side_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPLoadSync(),
	gsDPLoadTile(7, 0, 0, 124, 124),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPSetLights1(slidy_mat_wood_side_f3d_lights),
	gsSPEndDisplayList(),
};


Gfx slidy_world_root_mesh[] = {
	gsSPClearGeometryMode(G_LIGHTING),
	gsSPVertex(slidy_world_root_mesh_vtx_cull + 0, 8, 0),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPCullDisplayList(0, 7),
	gsSPDisplayList(mat_slidy_mar_yuka01_f3d),
	gsSPDisplayList(slidy_world_root_mesh_tri_0),
	gsSPDisplayList(mat_slidy_mat_wood_side_f3d),
	gsSPDisplayList(slidy_world_root_mesh_tri_1),
	gsSPEndDisplayList(),
};



Gfx slidy_material_revert_render_settings[] = {
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};
