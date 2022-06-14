// Colormaps provided by ncmaps - 2022-06-14T20:36:33.183352

#include "colormaps/colormaps_acton.h"
#include "colormaps/colormaps_algae.h"
#include "colormaps/colormaps_amp.h"
#include "colormaps/colormaps_balance.h"
#include "colormaps/colormaps_bam.h"
#include "colormaps/colormaps_bamako.h"
#include "colormaps/colormaps_bamO.h"
#include "colormaps/colormaps_batlow.h"
#include "colormaps/colormaps_batlowK.h"
#include "colormaps/colormaps_batlowW.h"
#include "colormaps/colormaps_berlin.h"
#include "colormaps/colormaps_bilbao.h"
#include "colormaps/colormaps_broc.h"
#include "colormaps/colormaps_brocO.h"
#include "colormaps/colormaps_buda.h"
#include "colormaps/colormaps_bukavu.h"
#include "colormaps/colormaps_bwr.h"
#include "colormaps/colormaps_cividis.h"
#include "colormaps/colormaps_coolwarm.h"
#include "colormaps/colormaps_cork.h"
#include "colormaps/colormaps_corkO.h"
#include "colormaps/colormaps_curl.h"
#include "colormaps/colormaps_davos.h"
#include "colormaps/colormaps_deep.h"
#include "colormaps/colormaps_delta.h"
#include "colormaps/colormaps_dense.h"
#include "colormaps/colormaps_devon.h"
#include "colormaps/colormaps_diff.h"
#include "colormaps/colormaps_fes.h"
#include "colormaps/colormaps_gray.h"
#include "colormaps/colormaps_grayC.h"
#include "colormaps/colormaps_haline.h"
#include "colormaps/colormaps_hawaii.h"
#include "colormaps/colormaps_ice.h"
#include "colormaps/colormaps_imola.h"
#include "colormaps/colormaps_inferno.h"
#include "colormaps/colormaps_lajolla.h"
#include "colormaps/colormaps_lapaz.h"
#include "colormaps/colormaps_lisbon.h"
#include "colormaps/colormaps_magma.h"
#include "colormaps/colormaps_matter.h"
#include "colormaps/colormaps_ncmaps.h"
#include "colormaps/colormaps_nuuk.h"
#include "colormaps/colormaps_oleron.h"
#include "colormaps/colormaps_oslo.h"
#include "colormaps/colormaps_oxy.h"
#include "colormaps/colormaps_phase.h"
#include "colormaps/colormaps_PiYG.h"
#include "colormaps/colormaps_plasma.h"
#include "colormaps/colormaps_PRGn.h"
#include "colormaps/colormaps_rain.h"
#include "colormaps/colormaps_RdBu.h"
#include "colormaps/colormaps_roma.h"
#include "colormaps/colormaps_romaO.h"
#include "colormaps/colormaps_solar.h"
#include "colormaps/colormaps_speed.h"
#include "colormaps/colormaps_tarn.h"
#include "colormaps/colormaps_tempo.h"
#include "colormaps/colormaps_thermal.h"
#include "colormaps/colormaps_tofino.h"
#include "colormaps/colormaps_tokyo.h"
#include "colormaps/colormaps_topo.h"
#include "colormaps/colormaps_turbid.h"
#include "colormaps/colormaps_turku.h"
#include "colormaps/colormaps_twilight.h"
#include "colormaps/colormaps_twilight_shifted.h"
#include "colormaps/colormaps_vanimo.h"
#include "colormaps/colormaps_vik.h"
#include "colormaps/colormaps_vikO.h"
#include "colormaps/colormaps_viridis.h"

#define INIT_NCMAPS_CMAPS \
init_cmap_from_data( "acton",  cmap_acton  ); \
init_cmap_from_data( "algae",  cmap_algae  ); \
init_cmap_from_data( "amp",  cmap_amp  ); \
init_cmap_from_data( "balance",  cmap_balance  ); \
init_cmap_from_data( "bam",  cmap_bam  ); \
init_cmap_from_data( "bamako",  cmap_bamako  ); \
init_cmap_from_data( "bamO",  cmap_bamO  ); \
init_cmap_from_data( "batlow",  cmap_batlow  ); \
init_cmap_from_data( "batlowK",  cmap_batlowK  ); \
init_cmap_from_data( "batlowW",  cmap_batlowW  ); \
init_cmap_from_data( "berlin",  cmap_berlin  ); \
init_cmap_from_data( "bilbao",  cmap_bilbao  ); \
init_cmap_from_data( "broc",  cmap_broc  ); \
init_cmap_from_data( "brocO",  cmap_brocO  ); \
init_cmap_from_data( "buda",  cmap_buda  ); \
init_cmap_from_data( "bukavu",  cmap_bukavu  ); \
init_cmap_from_data( "bwr",  cmap_bwr  ); \
init_cmap_from_data( "cividis",  cmap_cividis  ); \
init_cmap_from_data( "coolwarm",  cmap_coolwarm  ); \
init_cmap_from_data( "cork",  cmap_cork  ); \
init_cmap_from_data( "corkO",  cmap_corkO  ); \
init_cmap_from_data( "curl",  cmap_curl  ); \
init_cmap_from_data( "davos",  cmap_davos  ); \
init_cmap_from_data( "deep",  cmap_deep  ); \
init_cmap_from_data( "delta",  cmap_delta  ); \
init_cmap_from_data( "dense",  cmap_dense  ); \
init_cmap_from_data( "devon",  cmap_devon  ); \
init_cmap_from_data( "diff",  cmap_diff  ); \
init_cmap_from_data( "fes",  cmap_fes  ); \
init_cmap_from_data( "gray",  cmap_gray  ); \
init_cmap_from_data( "grayC",  cmap_grayC  ); \
init_cmap_from_data( "haline",  cmap_haline  ); \
init_cmap_from_data( "hawaii",  cmap_hawaii  ); \
init_cmap_from_data( "ice",  cmap_ice  ); \
init_cmap_from_data( "imola",  cmap_imola  ); \
init_cmap_from_data( "inferno",  cmap_inferno  ); \
init_cmap_from_data( "lajolla",  cmap_lajolla  ); \
init_cmap_from_data( "lapaz",  cmap_lapaz  ); \
init_cmap_from_data( "lisbon",  cmap_lisbon  ); \
init_cmap_from_data( "magma",  cmap_magma  ); \
init_cmap_from_data( "matter",  cmap_matter  ); \
init_cmap_from_data( "ncmaps",  cmap_ncmaps  ); \
init_cmap_from_data( "nuuk",  cmap_nuuk  ); \
init_cmap_from_data( "oleron",  cmap_oleron  ); \
init_cmap_from_data( "oslo",  cmap_oslo  ); \
init_cmap_from_data( "oxy",  cmap_oxy  ); \
init_cmap_from_data( "phase",  cmap_phase  ); \
init_cmap_from_data( "PiYG",  cmap_PiYG  ); \
init_cmap_from_data( "plasma",  cmap_plasma  ); \
init_cmap_from_data( "PRGn",  cmap_PRGn  ); \
init_cmap_from_data( "rain",  cmap_rain  ); \
init_cmap_from_data( "RdBu",  cmap_RdBu  ); \
init_cmap_from_data( "roma",  cmap_roma  ); \
init_cmap_from_data( "romaO",  cmap_romaO  ); \
init_cmap_from_data( "solar",  cmap_solar  ); \
init_cmap_from_data( "speed",  cmap_speed  ); \
init_cmap_from_data( "tarn",  cmap_tarn  ); \
init_cmap_from_data( "tempo",  cmap_tempo  ); \
init_cmap_from_data( "thermal",  cmap_thermal  ); \
init_cmap_from_data( "tofino",  cmap_tofino  ); \
init_cmap_from_data( "tokyo",  cmap_tokyo  ); \
init_cmap_from_data( "topo",  cmap_topo  ); \
init_cmap_from_data( "turbid",  cmap_turbid  ); \
init_cmap_from_data( "turku",  cmap_turku  ); \
init_cmap_from_data( "twilight",  cmap_twilight  ); \
init_cmap_from_data( "twilight_shifted",  cmap_twilight_shifted  ); \
init_cmap_from_data( "vanimo",  cmap_vanimo  ); \
init_cmap_from_data( "vik",  cmap_vik  ); \
init_cmap_from_data( "vikO",  cmap_vikO  ); \
init_cmap_from_data( "viridis",  cmap_viridis  ); 
