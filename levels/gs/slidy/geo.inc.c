#include "src/game/envfx_snow.h"

const GeoLayout slidy_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, slidy_world_root_mesh),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, slidy_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
