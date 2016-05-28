BOARD = zmmp7100
UBOOT_CONFIG = zmmp7100
BOARD_MODEL = em.avnet.com:mini_module_plus_7z100_rev_c:part0:1.0
PART = xc7z100ffg900-2
# CONFIG is the target configuration for the rocket-chip generator
CONFIG ?= DefaultFPGAConfig

include ../common/Makefrag
