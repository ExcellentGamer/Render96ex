#include <ultra64.h>
#include "sm64.h"
#include "behavior_data.h"
#include "model_ids.h"
#include "seq_ids.h"
#include "dialog_ids.h"
#include "segment_symbols.h"
#include "level_commands.h"

#include "game/level_update.h"

#include "levels/scripts.h"

#include "actors/common1.h"

#include "make_const_nonconst.h"
#include "levels/gs/header.h"
#include "levels/lll/header.h"

const LevelScript level_gs_entry[] = {
	INIT_LEVEL(),
	LOAD_MIO0(0x7, _gs_segment_7SegmentRomStart, _gs_segment_7SegmentRomEnd), 
	LOAD_MIO0(0xa, _clouds_skybox_mio0SegmentRomStart, _clouds_skybox_mio0SegmentRomEnd), 
	LOAD_MIO0(0x05, _group11_mio0SegmentRomStart, _group11_mio0SegmentRomEnd),
	LOAD_RAW(0x0C, _group11_geoSegmentRomStart, _group11_geoSegmentRomEnd),
	LOAD_MIO0(0x06, _group14_mio0SegmentRomStart, _group14_mio0SegmentRomEnd),
	LOAD_RAW(0x0D, _group14_geoSegmentRomStart, _group14_geoSegmentRomEnd),
	LOAD_MIO0(0x08, _common0_mio0SegmentRomStart, _common0_mio0SegmentRomEnd),
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario),
	JUMP_LINK(script_func_global_1),
	JUMP_LINK(script_func_global_12),
	JUMP_LINK(script_func_global_15),
	LOAD_MODEL_FROM_GEO(MODEL_LLL_TILTING_SQUARE_PLATFORM, tilty_geo),
	LOAD_MODEL_FROM_GEO(MODEL_SLIDY, slidy_geo),
	LOAD_MODEL_FROM_GEO(MODEL_GS_LOG, gs_log_geo), 

	AREA(1, gs_area_1),
		WARP_NODE(0x0A, LEVEL_GS, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_CASTLE, 0x01, 0x27, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_CASTLE, 0x01, 0x23, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_BOBOMB_BUDDY, 3286, 3001, 1667, 0, 0, 0, DIALOG_099 << 16, bhvBobombBuddy),
		OBJECT(MODEL_HEART, 4256, 6001, -4400, 0, 0, 0, 0x00000000, bhvRecoveryHeart),
		OBJECT(MODEL_HEART, 4069, 3512, 5609, 0, 0, 0, 0x00000000, bhvRecoveryHeart),
		OBJECT(MODEL_ENEMY_LAKITU, -2030, 3570, -5223, 0, 0, 0, 0x00000000, bhvEnemyLakitu),
		OBJECT(MODEL_GS_LOG, -2741, 2950, -1827, 0, 0, 0, 0x00040000, bhvBitfsSinkingPlatform2),
		OBJECT(MODEL_GS_LOG, -2741, 3000, -968, 0, 0, 0, 0x00030000, bhvBitfsSinkingPlatform2),
		OBJECT(MODEL_GS_LOG, -2741, 3000, -183, 0, 0, 0, 0x00020000, bhvBitfsSinkingPlatform2),
		OBJECT(MODEL_GS_LOG, 1790, 3467, -5940, 0, 0, 0, 0x00010000, bhvBitfsSinkingPlatform2),
		OBJECT(MODEL_GS_LOG, 4762, 3500, -2693, 0, -90, 0, 0x00040000, bhvBitfsSinkingPlatform2),
		OBJECT(MODEL_GS_LOG, 4106, 3500, -2693, 0, -90, 0, 0x00030000, bhvBitfsSinkingPlatform2),
		OBJECT(MODEL_GS_LOG, 3437, 3500, -2693, 0, -90, 0, 0x00020000, bhvBitfsSinkingPlatform2),
		OBJECT(MODEL_GS_LOG, 5420, 3500, -2693, 0, -90, 0, 0x00000000, bhvBitfsSinkingPlatform2),
		OBJECT(MODEL_GS_LOG, 2872, 3300, -2693, 0, -90, 0, 0x00010000, bhvBitfsSinkingPlatform2),
		OBJECT(MODEL_NONE, -2023, 3181, -5224, 0, 0, 0, 0x00AA0000, bhvPoleGrabbing),
		OBJECT(MODEL_NONE, 2100, 3219, -2656, 0, 0, 0, 0x01000000, bhvHiddenRedCoinStar),
		OBJECT(MODEL_SLIDY, 361, 2590, 534, 0, 0, 0, 0x01100000, bhvSlidingPlatform2),
		OBJECT(MODEL_SLIDY, -504, 2590, -18, 0, 180, 0, 0x01100000, bhvSlidingPlatform2),
		OBJECT(MODEL_SLIDY, 361, 2590, -558, 0, 0, 0, 0x01100000, bhvSlidingPlatform2),
		OBJECT(MODEL_SLIDY, -504, 2590, -1110, 0, 180, 0, 0x01100000, bhvSlidingPlatform2),
		OBJECT(MODEL_SLIDY, 361, 2590, -1666, 0, 0, 0, 0x01100000, bhvSlidingPlatform2),
		OBJECT(MODEL_SLIDY, -504, 2590, -2218, 0, 180, 0, 0x01100000, bhvSlidingPlatform2),
		OBJECT(MODEL_SLIDY, -3200, 2690, -2584, 0, 0, 0, 0x011C0000, bhvSlidingPlatform2),
		OBJECT(MODEL_SLIDY, -4720, 2690, -3072, 0, 180, 0, 0x011C0000, bhvSlidingPlatform2),
		OBJECT(MODEL_STAR, 5139, 6091, 5604, 0, 0, 0, 0x00000000, bhvStar),
		OBJECT(MODEL_LLL_TILTING_SQUARE_PLATFORM, -2755, 2600, 1842, 0, 0, 0, 0x00000000, bhvLllTiltingInvertedPyramid),
		OBJECT(MODEL_LLL_TILTING_SQUARE_PLATFORM, -1387, 2600, 3023, 0, 0, 0, 0x00000000, bhvLllTiltingInvertedPyramid),
		OBJECT(MODEL_LLL_TILTING_SQUARE_PLATFORM, 174, 3082, 3672, 0, 0, 0, 0x00000000, bhvLllTiltingInvertedPyramid),
		OBJECT(MODEL_LLL_TILTING_SQUARE_PLATFORM, 174, 3082, 4952, 0, 0, 0, 0x00000000, bhvLllTiltingInvertedPyramid),
		OBJECT(MODEL_LLL_TILTING_SQUARE_PLATFORM, -413, 3082, 4305, 0, 0, 0, 0x00000000, bhvLllTiltingInvertedPyramid),
		OBJECT(MODEL_LLL_TILTING_SQUARE_PLATFORM, 733, 3082, 4305, 0, 0, 0, 0x00000000, bhvLllTiltingInvertedPyramid),
		OBJECT(MODEL_LLL_TILTING_SQUARE_PLATFORM, 1735, 2701, -721, 0, 0, 0, 0x00000000, bhvLllTiltingInvertedPyramid),
		OBJECT(MODEL_LLL_TILTING_SQUARE_PLATFORM, 3064, 2610, -183, 0, 90, 0, 0x00000000, bhvLllTiltingInvertedPyramid),
		OBJECT(MODEL_LLL_TILTING_SQUARE_PLATFORM, 3845, 2610, -183, 0, 90, 0, 0x00000000, bhvLllTiltingInvertedPyramid),
		OBJECT(MODEL_LLL_TILTING_SQUARE_PLATFORM, 4627, 2610, -183, 0, 90, 0, 0x00000000, bhvLllTiltingInvertedPyramid),
		OBJECT(MODEL_NONE, -2108, 4324, 6854, 0, -180, 0, 0x000A0000, bhvSpinAirborneWarp),
		MARIO_POS(0x01, -180, -2108, 4324, 6854),
		TERRAIN(gs_area_1_collision),
		MACRO_OBJECTS(gs_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_LEVEL_UNDERGROUND),
		TERRAIN_TYPE(TERRAIN_GRASS),
	END_AREA(),

	FREE_LEVEL_POOL(),
	MARIO_POS(0x01, -180, -2108, 4324, 6854),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};
