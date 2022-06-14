// Original ncview colormaps
#include "colormaps/colormaps_3gauss.h"
#include "colormaps/colormaps_3saw.h"
#include "colormaps/colormaps_bw.h"
#include "colormaps/colormaps_default.h"
#include "colormaps/colormaps_detail.h"
#include "colormaps/colormaps_extrema.h"
#include "colormaps/colormaps_helix.h"
#include "colormaps/colormaps_helix2.h"
#include "colormaps/colormaps_hotres.h"
#include "colormaps/colormaps_ssec.h"

// New colormaps provided by A. Shchepetkin
#include "colormaps/colormaps_bright.h"
#include "colormaps/colormaps_banded.h"
#include "colormaps/colormaps_rainbow.h"
#include "colormaps/colormaps_jaisnb.h"
#include "colormaps/colormaps_jaisnc.h"
#include "colormaps/colormaps_jaisnd.h"
#include "colormaps/colormaps_blu_red.h"
#include "colormaps/colormaps_manga.h"
#include "colormaps/colormaps_jet.h"
#include "colormaps/colormaps_wheel.h"

#define INIT_ORIG_CMAPS \
init_cmap_from_data( "3gauss",  cmap_3gauss  ); \
init_cmap_from_data( "detail",  cmap_detail  ); \
init_cmap_from_data( "ssec",    cmap_ssec    ); \
init_cmap_from_data( "bright",  cmap_bright  ); \
init_cmap_from_data( "banded",  cmap_banded  ); \
init_cmap_from_data( "rainbow", cmap_rainbow ); \
init_cmap_from_data( "jaisnb",  cmap_jaisnb  ); \
init_cmap_from_data( "jaisnc",  cmap_jaisnc  ); \
init_cmap_from_data( "jaisnd",  cmap_jaisnd  ); \
init_cmap_from_data( "blu_red", cmap_blu_red ); \
init_cmap_from_data( "manga",   cmap_manga   ); \
init_cmap_from_data( "jet",     cmap_jet     ); \
init_cmap_from_data( "wheel",   cmap_wheel   ); \
init_cmap_from_data( "3saw",    cmap_3saw    ); \
init_cmap_from_data( "bw",      cmap_bw      ); \
init_cmap_from_data( "default", cmap_default ); \
init_cmap_from_data( "extrema", cmap_extrema ); \
init_cmap_from_data( "helix",   cmap_helix   ); \
init_cmap_from_data( "helix2",  cmap_helix2  ); \
init_cmap_from_data( "hotres",  cmap_hotres  );