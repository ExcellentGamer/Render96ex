#include "src/game/envfx_snow.h"

const GeoLayout gs_log_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, gs_log_world_root_mesh),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, gs_log_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
