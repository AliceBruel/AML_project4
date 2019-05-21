#include "__cf_nmm2DFullBody.h"
#ifndef RTW_HEADER_nmm2DFullBody_acc_h_
#define RTW_HEADER_nmm2DFullBody_acc_h_
#include <stddef.h>
#include <float.h>
#ifndef nmm2DFullBody_acc_COMMON_INCLUDES_
#define nmm2DFullBody_acc_COMMON_INCLUDES_
#include <stdlib.h>
#define S_FUNCTION_NAME simulink_only_sfcn 
#define S_FUNCTION_LEVEL 2
#define RTW_GENERATED_S_FUNCTION
#include "rtwtypes.h"
#include "simstruc.h"
#include "fixedpoint.h"
#endif
#include "nmm2DFullBody_acc_types.h"
#include "multiword_types.h"
#include "mwmathutil.h"
#include "rtGetInf.h"
#include "rt_defines.h"
#include "rt_nonfinite.h"
typedef struct { real_T B_2_1_0 ; real_T B_2_2_0 ; real_T B_2_3_0 ; real_T
B_2_9_0 ; real_T B_1_0_0 ; real_T B_1_2_0 ; real_T B_1_3_0 ; real_T B_1_4_0 ;
real_T B_1_8_0 ; real_T B_1_10_0 ; real_T B_0_0_0 ; real_T B_0_2_0 ; real_T
B_0_3_0 ; real_T B_0_9_0 ; real_T B_0_10_0 ; real_T B_0_11_0 ; boolean_T
B_2_0_0 ; boolean_T B_2_4_0 ; boolean_T B_2_8_0 [ 2 ] ; boolean_T B_1_7_0 ;
boolean_T B_1_12_0 ; boolean_T B_1_14_0 ; boolean_T B_0_5_0 ; boolean_T
B_0_7_0 ; char_T pad_B_0_7_0 [ 7 ] ; } B_GroundFrictionModel_nmm2DFullBody_T
; typedef struct { int32_T GroundFrictionModel_sysIdxToRun ; int32_T
XAxisStaticFrictionModel_sysIdxToRun ; int32_T
XAxisKineticFrictionModel_sysIdxToRun ; int_T Abs_MODE ; int_T Abs_MODE_i ;
int_T Abs_MODE_k ; int_T Sign1_MODE ; int8_T GroundFrictionModel_SubsysRanBC
; int8_T XAxisStaticFrictionModel_SubsysRanBC ; int8_T
XAxisKineticFrictionModel_SubsysRanBC ; boolean_T Memory_PreviousInput ;
boolean_T Memory_PreviousInput_p ; boolean_T Compare_Mode ; boolean_T
Compare_Mode_o ; boolean_T Memory_PreviousInput_j ; boolean_T Compare_Mode_h
; boolean_T Memory_PreviousInput_e ; boolean_T GroundFrictionModel_MODE ;
boolean_T XAxisStaticFrictionModel_MODE ; boolean_T
XAxisKineticFrictionModel_MODE ; char_T pad_XAxisKineticFrictionModel_MODE [
7 ] ; } DW_GroundFrictionModel_nmm2DFullBody_T ; typedef struct { real_T
Abs_AbsZc_ZC_m ; real_T Compare_RelopInput_ZC_p ; real_T Abs_AbsZc_ZC_k ;
real_T Compare_RelopInput_ZC_n ; real_T Abs_AbsZc_ZC_fg ; real_T
Compare_RelopInput_ZC_b ; real_T Sign1_Input_ZC ; }
ZCV_GroundFrictionModel_nmm2DFullBody_T ; typedef struct { ZCSigState
Abs_AbsZc_ZCE_bd ; ZCSigState Compare_RelopInput_ZCE_ci ; ZCSigState
Abs_AbsZc_ZCE_f ; ZCSigState Compare_RelopInput_ZCE_j ; ZCSigState
Abs_AbsZc_ZCE_db ; ZCSigState Compare_RelopInput_ZCE_hk ; ZCSigState
Sign1_Input_ZCE ; } ZCE_GroundFrictionModel_nmm2DFullBody_T ; typedef struct
{ real_T B_6_0_0 [ 2 ] ; real_T B_6_1_0 [ 2 ] ; real_T B_6_2_0 [ 2 ] ; }
B_LeftForcePlate_nmm2DFullBody_T ; typedef struct { int32_T
LeftForcePlate_sysIdxToRun ; int8_T LeftForcePlate_SubsysRanBC ; boolean_T
LeftForcePlate_MODE ; char_T pad_LeftForcePlate_MODE [ 2 ] ; }
DW_LeftForcePlate_nmm2DFullBody_T ; typedef struct { real_T B_15_0_0 ; real_T
B_15_1_0 ; real_T B_15_2_0 ; } B_StancePhase_nmm2DFullBody_T ; typedef struct
{ int32_T StancePhase_sysIdxToRun ; int8_T StancePhase_SubsysRanBC ;
boolean_T StancePhase_MODE ; char_T pad_StancePhase_MODE [ 2 ] ; }
DW_StancePhase_nmm2DFullBody_T ; typedef struct { real_T
StancePhase_Enable_ZC_f ; } ZCV_StancePhase_nmm2DFullBody_T ; typedef struct
{ ZCSigState StancePhase_Enable_ZCE_m ; } ZCE_StancePhase_nmm2DFullBody_T ;
typedef struct { real_T B_16_0_0 ; real_T B_16_1_0 ; real_T B_16_2_0 ; }
B_SwingPhase_nmm2DFullBody_T ; typedef struct { int32_T
SwingPhase_sysIdxToRun ; int8_T SwingPhase_SubsysRanBC ; boolean_T
SwingPhase_MODE ; char_T pad_SwingPhase_MODE [ 2 ] ; }
DW_SwingPhase_nmm2DFullBody_T ; typedef struct { real_T B_17_0_0 ; real_T
B_17_1_0 ; real_T B_17_2_0 ; real_T B_17_3_0 ; real_T B_17_4_0 ; real_T
B_17_5_0 ; real_T B_17_6_0 ; real_T B_17_7_0 ; real_T B_17_8_0 ; real_T
B_17_9_0 ; real_T B_17_10_0 ; real_T B_17_11_0 ; real_T B_17_12_0 ; real_T
B_17_13_0 ; real_T B_17_14_0 ; } B_StancePhase_nmm2DFullBody_o_T ; typedef
struct { int32_T StancePhase_sysIdxToRun ; int8_T StancePhase_SubsysRanBC ;
boolean_T StancePhase_MODE ; char_T pad_StancePhase_MODE [ 2 ] ; }
DW_StancePhase_nmm2DFullBody_i_T ; typedef struct { real_T
StancePhase_Enable_ZC_b ; } ZCV_StancePhase_nmm2DFullBody_h_T ; typedef
struct { ZCSigState StancePhase_Enable_ZCE_p ; }
ZCE_StancePhase_nmm2DFullBody_n_T ; typedef struct { real_T B_18_0_0 ; real_T
B_18_1_0 ; real_T B_18_2_0 ; real_T B_18_3_0 ; real_T B_18_4_0 ; real_T
B_18_5_0 ; real_T B_18_6_0 ; real_T B_18_7_0 ; real_T B_18_8_0 ; real_T
B_18_9_0 ; real_T B_18_10_0 ; real_T B_18_11_0 ; real_T B_18_12_0 ; real_T
B_18_13_0 ; real_T B_18_14_0 ; real_T B_18_15_0 ; real_T B_18_16_0 ; real_T
B_18_17_0 ; real_T B_18_18_0 ; } B_StancePhase_nmm2DFullBody_j_T ; typedef
struct { int32_T StancePhase_sysIdxToRun ; int8_T StancePhase_SubsysRanBC ;
boolean_T StancePhase_MODE ; char_T pad_StancePhase_MODE [ 2 ] ; }
DW_StancePhase_nmm2DFullBody_in_T ; typedef struct { real_T
StancePhase_Enable_ZC_k ; } ZCV_StancePhase_nmm2DFullBody_hs_T ; typedef
struct { ZCSigState StancePhase_Enable_ZCE_a ; }
ZCE_StancePhase_nmm2DFullBody_c_T ; typedef struct { real_T B_19_0_0 ; real_T
B_19_1_0 ; real_T B_19_2_0 ; real_T B_19_3_0 ; real_T B_19_4_0 ; real_T
B_19_5_0 ; real_T B_19_6_0 ; real_T B_19_7_0 ; real_T B_19_8_0 ; real_T
B_19_9_0 ; } B_SwingPhase_nmm2DFullBody_n_T ; typedef struct { int32_T
SwingPhase_sysIdxToRun ; int8_T SwingPhase_SubsysRanBC ; boolean_T
SwingPhase_MODE ; char_T pad_SwingPhase_MODE [ 2 ] ; }
DW_SwingPhase_nmm2DFullBody_n_T ; typedef struct { real_T B_20_0_0 ; real_T
B_20_1_0 ; real_T B_20_2_0 ; real_T B_20_3_0 ; real_T B_20_4_0 ; real_T
B_20_5_0 ; real_T B_20_6_0 ; real_T B_20_7_0 ; }
B_StancePhase_nmm2DFullBody_e_T ; typedef struct { int32_T
StancePhase_sysIdxToRun ; int8_T StancePhase_SubsysRanBC ; boolean_T
StancePhase_MODE ; char_T pad_StancePhase_MODE [ 2 ] ; }
DW_StancePhase_nmm2DFullBody_l_T ; typedef struct { real_T
StancePhase_Enable_ZC_i ; } ZCV_StancePhase_nmm2DFullBody_n_T ; typedef
struct { ZCSigState StancePhase_Enable_ZCE_e ; }
ZCE_StancePhase_nmm2DFullBody_e_T ; typedef struct { real_T B_21_0_0 ; real_T
B_21_1_0 ; real_T B_21_2_0 ; real_T B_21_3_0 ; }
B_SwingPhase_nmm2DFullBody_a_T ; typedef struct { int32_T
SwingPhase_sysIdxToRun ; int8_T SwingPhase_SubsysRanBC ; boolean_T
SwingPhase_MODE ; char_T pad_SwingPhase_MODE [ 2 ] ; }
DW_SwingPhase_nmm2DFullBody_p_T ; typedef struct { real_T B_23_0_0 ; real_T
B_23_1_0 ; real_T B_23_2_0 ; real_T B_23_3_0 ; real_T B_23_4_0 ; real_T
B_23_5_0 ; real_T B_23_6_0 ; real_T B_23_7_0 ; real_T B_23_8_0 ; }
B_StancePhase_nmm2DFullBody_g_T ; typedef struct { int32_T
StancePhase_sysIdxToRun ; int8_T StancePhase_SubsysRanBC ; boolean_T
StancePhase_MODE ; char_T pad_StancePhase_MODE [ 2 ] ; }
DW_StancePhase_nmm2DFullBody_p_T ; typedef struct { real_T
StancePhase_Enable_ZC ; } ZCV_StancePhase_nmm2DFullBody_o_T ; typedef struct
{ ZCSigState StancePhase_Enable_ZCE ; } ZCE_StancePhase_nmm2DFullBody_m_T ;
typedef struct { real_T B_36_0_0 ; real_T B_36_1_0 [ 58 ] ; real_T B_36_1_1 [
22 ] ; real_T B_36_1_2 ; real_T B_36_2_0 [ 3 ] ; real_T B_36_3_0 ; real_T
B_36_4_0 [ 3 ] ; real_T B_36_8_0 ; real_T B_36_9_0 [ 3 ] ; real_T B_36_10_0 ;
real_T B_36_11_0 [ 3 ] ; real_T B_36_25_0 [ 4 ] ; real_T B_36_34_0 ; real_T
B_36_35_0 [ 3 ] ; real_T B_36_36_0 ; real_T B_36_37_0 [ 3 ] ; real_T
B_36_41_0 ; real_T B_36_42_0 [ 3 ] ; real_T B_36_43_0 ; real_T B_36_44_0 [ 3
] ; real_T B_36_59_0 [ 4 ] ; real_T B_36_68_0 ; real_T B_36_69_0 ; real_T
B_36_71_0 ; real_T B_36_72_0 ; real_T B_36_73_0 ; real_T B_36_74_0 ; real_T
B_36_80_0 ; real_T B_36_81_0 ; real_T B_36_83_0 ; real_T B_36_84_0 ; real_T
B_36_85_0 ; real_T B_36_86_0 ; real_T B_36_92_0 [ 3 ] ; real_T B_36_93_0 [ 3
] ; real_T B_36_96_0 ; real_T B_36_97_0 ; real_T B_36_99_0 ; real_T
B_36_101_0 ; real_T B_36_102_0 ; real_T B_36_104_0 ; real_T B_36_105_0 [ 3 ]
; real_T B_36_106_0 [ 3 ] ; real_T B_36_108_0 [ 3 ] ; real_T B_36_109_0 [ 3 ]
; real_T B_36_112_0 ; real_T B_36_113_0 ; real_T B_36_115_0 ; real_T
B_36_116_0 ; real_T B_36_117_0 ; real_T B_36_119_0 ; real_T B_36_120_0 ;
real_T B_36_121_0 ; real_T B_36_123_0 ; real_T B_36_124_0 ; real_T B_36_125_0
; real_T B_36_127_0 ; real_T B_36_132_0 ; real_T B_36_133_0 ; real_T
B_36_134_0 ; real_T B_36_135_0 ; real_T B_36_136_0 ; real_T B_36_138_0 ;
real_T B_36_139_0 ; real_T B_36_140_0 ; real_T B_36_143_0 ; real_T B_36_144_0
; real_T B_36_146_0 ; real_T B_36_148_0 ; real_T B_36_149_0 ; real_T
B_36_151_0 ; real_T B_36_153_0 [ 2 ] ; real_T B_36_154_0 ; real_T B_36_155_0
; real_T B_36_157_0 ; real_T B_36_159_0 ; real_T B_36_160_0 ; real_T
B_36_162_0 ; real_T B_36_164_0 [ 2 ] ; real_T B_36_165_0 ; real_T B_36_166_0
; real_T B_36_167_0 ; real_T B_36_168_0 ; real_T B_36_169_0 ; real_T
B_36_170_0 ; real_T B_36_171_0 ; real_T B_36_172_0 ; real_T B_36_173_0 ;
real_T B_36_174_0 ; real_T B_36_175_0 ; real_T B_36_178_0 ; real_T B_36_179_0
; real_T B_36_180_0 ; real_T B_36_181_0 ; real_T B_36_183_0 ; real_T
B_36_185_0 ; real_T B_36_187_0 ; real_T B_36_189_0 ; real_T B_36_190_0 ;
real_T B_36_192_0 ; real_T B_36_194_0 [ 2 ] ; real_T B_36_195_0 ; real_T
B_36_196_0 ; real_T B_36_197_0 ; real_T B_36_198_0 ; real_T B_36_199_0 ;
real_T B_36_200_0 ; real_T B_36_201_0 ; real_T B_36_202_0 ; real_T B_36_203_0
; real_T B_36_204_0 ; real_T B_36_205_0 ; real_T B_36_208_0 ; real_T
B_36_209_0 ; real_T B_36_210_0 ; real_T B_36_211_0 ; real_T B_36_212_0 ;
real_T B_36_214_0 ; real_T B_36_217_0 ; real_T B_36_219_0 ; real_T B_36_220_0
; real_T B_36_222_0 ; real_T B_36_224_0 [ 2 ] ; real_T B_36_225_0 ; real_T
B_36_226_0 ; real_T B_36_227_0 ; real_T B_36_228_0 ; real_T B_36_229_0 ;
real_T B_36_230_0 ; real_T B_36_231_0 ; real_T B_36_232_0 ; real_T B_36_233_0
; real_T B_36_234_0 ; real_T B_36_235_0 ; real_T B_36_236_0 ; real_T
B_36_239_0 ; real_T B_36_240_0 ; real_T B_36_241_0 ; real_T B_36_242_0 ;
real_T B_36_244_0 ; real_T B_36_246_0 [ 3 ] ; real_T B_36_247_0 [ 3 ] ;
real_T B_36_248_0 ; real_T B_36_249_0 ; real_T B_36_250_0 ; real_T B_36_251_0
; real_T B_36_252_0 ; real_T B_36_253_0 ; real_T B_36_254_0 ; real_T
B_36_255_0 ; real_T B_36_257_0 ; real_T B_36_258_0 ; real_T B_36_259_0 ;
real_T B_36_260_0 ; real_T B_36_261_0 ; real_T B_36_262_0 ; real_T B_36_263_0
; real_T B_36_265_0 ; real_T B_36_267_0 ; real_T B_36_268_0 ; real_T
B_36_270_0 ; real_T B_36_272_0 [ 2 ] ; real_T B_36_273_0 ; real_T B_36_274_0
; real_T B_36_275_0 ; real_T B_36_276_0 ; real_T B_36_277_0 ; real_T
B_36_278_0 ; real_T B_36_279_0 ; real_T B_36_280_0 ; real_T B_36_281_0 ;
real_T B_36_282_0 ; real_T B_36_283_0 ; real_T B_36_286_0 ; real_T B_36_287_0
; real_T B_36_288_0 ; real_T B_36_289_0 ; real_T B_36_291_0 ; real_T
B_36_294_0 ; real_T B_36_296_0 ; real_T B_36_297_0 ; real_T B_36_299_0 ;
real_T B_36_301_0 [ 2 ] ; real_T B_36_302_0 ; real_T B_36_303_0 ; real_T
B_36_304_0 ; real_T B_36_305_0 ; real_T B_36_306_0 ; real_T B_36_307_0 ;
real_T B_36_308_0 ; real_T B_36_309_0 ; real_T B_36_310_0 ; real_T B_36_311_0
; real_T B_36_312_0 ; real_T B_36_313_0 ; real_T B_36_316_0 ; real_T
B_36_317_0 ; real_T B_36_318_0 ; real_T B_36_319_0 ; real_T B_36_320_0 ;
real_T B_36_322_0 ; real_T B_36_325_0 ; real_T B_36_327_0 [ 3 ] ; real_T
B_36_328_0 ; real_T B_36_329_0 ; real_T B_36_330_0 ; real_T B_36_331_0 ;
real_T B_36_332_0 ; real_T B_36_333_0 ; real_T B_36_334_0 ; real_T B_36_335_0
; real_T B_36_337_0 ; real_T B_36_338_0 ; real_T B_36_339_0 ; real_T
B_36_340_0 ; real_T B_36_341_0 ; real_T B_36_342_0 ; real_T B_36_343_0 ;
real_T B_36_344_0 ; real_T B_36_345_0 ; real_T B_36_346_0 ; real_T B_36_347_0
; real_T B_36_348_0 ; real_T B_36_349_0 ; real_T B_36_350_0 ; real_T
B_36_351_0 ; real_T B_36_352_0 ; real_T B_36_353_0 ; real_T B_36_356_0 ;
real_T B_36_357_0 ; real_T B_36_358_0 ; real_T B_36_359_0 ; real_T B_36_361_0
; real_T B_36_363_0 ; real_T B_36_364_0 ; real_T B_36_365_0 ; real_T
B_36_366_0 ; real_T B_36_367_0 ; real_T B_36_368_0 ; real_T B_36_369_0 ;
real_T B_36_370_0 ; real_T B_36_371_0 ; real_T B_36_372_0 ; real_T B_36_373_0
; real_T B_36_374_0 ; real_T B_36_375_0 ; real_T B_36_376_0 ; real_T
B_36_377_0 ; real_T B_36_378_0 ; real_T B_36_381_0 ; real_T B_36_382_0 ;
real_T B_36_383_0 ; real_T B_36_384_0 ; real_T B_36_385_0 ; real_T B_36_387_0
; real_T B_36_390_0 ; real_T B_36_392_0 [ 3 ] ; real_T B_36_393_0 ; real_T
B_36_394_0 ; real_T B_36_395_0 ; real_T B_36_396_0 ; real_T B_36_397_0 ;
real_T B_36_398_0 ; real_T B_36_399_0 ; real_T B_36_401_0 ; real_T B_36_402_0
; real_T B_36_403_0 ; real_T B_36_404_0 ; real_T B_36_405_0 ; real_T
B_36_406_0 ; real_T B_36_407_0 ; real_T B_36_408_0 ; real_T B_36_409_0 ;
real_T B_36_410_0 ; real_T B_36_411_0 ; real_T B_36_412_0 ; real_T B_36_413_0
; real_T B_36_414_0 ; real_T B_36_415_0 ; real_T B_36_416_0 ; real_T
B_36_417_0 ; real_T B_36_420_0 ; real_T B_36_421_0 ; real_T B_36_422_0 ;
real_T B_36_423_0 ; real_T B_36_425_0 ; real_T B_36_427_0 ; real_T B_36_428_0
; real_T B_36_429_0 ; real_T B_36_430_0 ; real_T B_36_431_0 ; real_T
B_36_432_0 ; real_T B_36_433_0 ; real_T B_36_434_0 ; real_T B_36_435_0 ;
real_T B_36_436_0 ; real_T B_36_437_0 ; real_T B_36_438_0 ; real_T B_36_439_0
; real_T B_36_440_0 ; real_T B_36_441_0 ; real_T B_36_442_0 ; real_T
B_36_445_0 ; real_T B_36_446_0 ; real_T B_36_447_0 ; real_T B_36_448_0 ;
real_T B_36_449_0 ; real_T B_36_451_0 ; real_T B_36_453_0 ; real_T B_36_454_0
; real_T B_36_455_0 ; real_T B_36_456_0 ; real_T B_36_457_0 ; real_T
B_36_458_0 ; real_T B_36_460_0 ; real_T B_36_462_0 ; real_T B_36_463_0 ;
real_T B_36_465_0 ; real_T B_36_467_0 [ 2 ] ; real_T B_36_468_0 ; real_T
B_36_469_0 ; real_T B_36_470_0 ; real_T B_36_471_0 ; real_T B_36_472_0 ;
real_T B_36_473_0 ; real_T B_36_474_0 ; real_T B_36_475_0 ; real_T B_36_476_0
; real_T B_36_477_0 ; real_T B_36_478_0 ; real_T B_36_481_0 ; real_T
B_36_482_0 ; real_T B_36_483_0 ; real_T B_36_484_0 ; real_T B_36_486_0 ;
real_T B_36_488_0 [ 3 ] ; real_T B_36_489_0 ; real_T B_36_490_0 ; real_T
B_36_491_0 ; real_T B_36_492_0 ; real_T B_36_493_0 ; real_T B_36_494_0 ;
real_T B_36_495_0 ; real_T B_36_497_0 ; real_T B_36_499_0 ; real_T B_36_502_0
; real_T B_36_504_0 ; real_T B_36_505_0 ; real_T B_36_507_0 ; real_T
B_36_509_0 [ 2 ] ; real_T B_36_510_0 ; real_T B_36_511_0 ; real_T B_36_512_0
; real_T B_36_513_0 ; real_T B_36_514_0 ; real_T B_36_515_0 ; real_T
B_36_516_0 ; real_T B_36_517_0 ; real_T B_36_518_0 ; real_T B_36_519_0 ;
real_T B_36_520_0 ; real_T B_36_521_0 ; real_T B_36_524_0 ; real_T B_36_525_0
; real_T B_36_526_0 ; real_T B_36_527_0 ; real_T B_36_528_0 ; real_T
B_36_530_0 ; real_T B_36_533_0 ; real_T B_36_535_0 ; real_T B_36_536_0 ;
real_T B_36_538_0 ; real_T B_36_540_0 [ 2 ] ; real_T B_36_541_0 ; real_T
B_36_542_0 ; real_T B_36_544_0 ; real_T B_36_546_0 ; real_T B_36_547_0 ;
real_T B_36_549_0 ; real_T B_36_551_0 [ 2 ] ; real_T B_36_552_0 ; real_T
B_36_553_0 ; real_T B_36_554_0 ; real_T B_36_555_0 ; real_T B_36_556_0 ;
real_T B_36_557_0 ; real_T B_36_558_0 ; real_T B_36_559_0 ; real_T B_36_560_0
; real_T B_36_561_0 ; real_T B_36_562_0 ; real_T B_36_565_0 ; real_T
B_36_566_0 ; real_T B_36_567_0 ; real_T B_36_568_0 ; real_T B_36_570_0 ;
real_T B_36_572_0 [ 3 ] ; real_T B_36_573_0 ; real_T B_36_574_0 ; real_T
B_36_575_0 ; real_T B_36_576_0 ; real_T B_36_577_0 ; real_T B_36_578_0 ;
real_T B_36_579_0 ; real_T B_36_580_0 ; real_T B_36_582_0 ; real_T B_36_583_0
; real_T B_36_584_0 ; real_T B_36_586_0 ; real_T B_36_587_0 ; real_T
B_36_589_0 ; real_T B_36_591_0 ; real_T B_36_593_0 ; real_T B_36_595_0 ;
real_T B_36_596_0 ; real_T B_36_598_0 ; real_T B_36_600_0 [ 2 ] ; real_T
B_36_601_0 ; real_T B_36_602_0 ; real_T B_36_603_0 ; real_T B_36_604_0 ;
real_T B_36_605_0 ; real_T B_36_606_0 ; real_T B_36_607_0 ; real_T B_36_608_0
; real_T B_36_609_0 ; real_T B_36_610_0 ; real_T B_36_611_0 ; real_T
B_36_614_0 ; real_T B_36_615_0 ; real_T B_36_616_0 ; real_T B_36_617_0 ;
real_T B_36_618_0 ; real_T B_36_620_0 ; real_T B_36_623_0 ; real_T B_36_625_0
; real_T B_36_626_0 ; real_T B_36_628_0 ; real_T B_36_630_0 [ 2 ] ; real_T
B_36_631_0 ; real_T B_36_632_0 ; real_T B_36_633_0 ; real_T B_36_634_0 ;
real_T B_36_635_0 ; real_T B_36_636_0 ; real_T B_36_637_0 ; real_T B_36_638_0
; real_T B_36_639_0 ; real_T B_36_640_0 ; real_T B_36_641_0 ; real_T
B_36_642_0 ; real_T B_36_645_0 ; real_T B_36_646_0 ; real_T B_36_647_0 ;
real_T B_36_648_0 ; real_T B_36_650_0 ; real_T B_36_652_0 [ 3 ] ; real_T
B_36_653_0 [ 3 ] ; real_T B_36_654_0 ; real_T B_36_655_0 ; real_T B_36_657_0
[ 3 ] ; real_T B_36_658_0 ; real_T B_36_659_0 ; real_T B_36_686_0 [ 2 ] ;
real_T B_36_687_0 ; real_T B_36_688_0 ; real_T B_36_689_0 ; real_T B_36_690_0
; real_T B_36_691_0 ; real_T B_36_692_0 ; real_T B_36_694_0 ; real_T
B_36_696_0 ; real_T B_36_697_0 ; real_T B_36_698_0 [ 2 ] ; real_T B_36_700_0
; real_T B_36_703_0 ; real_T B_36_705_0 ; real_T B_36_707_0 ; real_T
B_36_708_0 ; real_T B_36_709_0 ; real_T B_36_712_0 [ 2 ] ; real_T B_36_713_0
[ 2 ] ; real_T B_36_715_0 ; real_T B_36_717_0 ; real_T B_36_718_0 ; real_T
B_36_719_0 ; real_T B_36_720_0 ; real_T B_36_724_0 ; real_T B_36_726_0 ;
real_T B_36_727_0 ; real_T B_36_731_0 ; real_T B_36_733_0 ; real_T B_36_734_0
; real_T B_36_735_0 ; real_T B_36_739_0 [ 2 ] ; real_T B_36_740_0 [ 2 ] ;
real_T B_36_743_0 ; real_T B_36_746_0 ; real_T B_36_748_0 ; real_T B_36_750_0
; real_T B_36_751_0 [ 2 ] ; real_T B_36_753_0 ; real_T B_36_756_0 ; real_T
B_36_758_0 ; real_T B_36_760_0 ; real_T B_36_761_0 ; real_T B_36_762_0 ;
real_T B_36_765_0 [ 2 ] ; real_T B_36_766_0 [ 2 ] ; real_T B_36_768_0 ;
real_T B_36_770_0 ; real_T B_36_771_0 ; real_T B_36_772_0 ; real_T B_36_776_0
; real_T B_36_778_0 ; real_T B_36_779_0 ; real_T B_36_783_0 ; real_T
B_36_785_0 ; real_T B_36_786_0 ; real_T B_36_787_0 ; real_T B_36_791_0 [ 2 ]
; real_T B_36_792_0 [ 2 ] ; real_T B_36_795_0 ; real_T B_36_798_0 ; real_T
B_36_801_0 [ 2 ] ; real_T B_36_802_0 ; real_T B_36_803_0 ; real_T B_36_808_0
[ 2 ] ; real_T B_36_810_0 ; real_T B_36_811_0 ; real_T B_36_812_0 ; real_T
B_36_813_0 ; real_T B_36_814_0 ; real_T B_36_815_0 ; real_T B_36_818_0 [ 2 ]
; real_T B_36_822_0 [ 2 ] ; real_T B_36_824_0 ; real_T B_36_825_0 ; real_T
B_36_829_0 [ 2 ] ; real_T B_36_831_0 ; real_T B_36_832_0 ; real_T B_36_834_0
; real_T B_36_835_0 ; real_T B_36_838_0 [ 3 ] ; real_T B_36_839_0 [ 3 ] ;
real_T B_36_841_0 [ 3 ] ; real_T B_36_842_0 [ 3 ] ; real_T B_36_850_0 [ 3 ] ;
real_T B_36_851_0 [ 3 ] ; real_T B_36_852_0 ; real_T B_36_853_0 ; real_T
B_36_854_0 ; real_T B_36_859_0 [ 3 ] ; real_T B_36_864_0 [ 6 ] ; real_T
B_36_875_0 [ 9 ] ; real_T B_36_878_0 ; real_T B_36_879_0 ; real_T B_36_880_0
; real_T B_36_881_0 ; real_T B_36_882_0 ; real_T B_36_883_0 ; real_T
B_36_884_0 ; real_T B_36_886_0 ; real_T B_36_888_0 ; real_T B_36_889_0 ;
real_T B_36_890_0 ; real_T B_36_891_0 ; real_T B_36_892_0 ; real_T B_36_893_0
; real_T B_36_897_0 ; real_T B_36_898_0 ; real_T B_36_899_0 ; real_T
B_36_900_0 ; real_T B_36_901_0 ; real_T B_36_902_0 ; real_T B_36_903_0 ;
real_T B_36_906_0 ; real_T B_36_907_0 ; real_T B_36_908_0 ; real_T B_36_909_0
; real_T B_36_910_0 ; real_T B_36_911_0 ; real_T B_36_912_0 ; real_T
B_36_913_0 ; real_T B_36_914_0 ; real_T B_36_915_0 ; real_T B_36_916_0 ;
real_T B_36_917_0 ; real_T B_36_918_0 ; real_T B_36_919_0 ; real_T B_36_920_0
; real_T B_36_923_0 ; real_T B_36_924_0 ; real_T B_36_925_0 ; real_T
B_36_926_0 ; real_T B_36_928_0 ; real_T B_36_929_0 ; real_T B_36_930_0 ;
real_T B_36_931_0 ; real_T B_36_932_0 ; real_T B_36_933_0 ; real_T B_36_934_0
; real_T B_36_935_0 ; real_T B_36_936_0 ; real_T B_36_937_0 ; real_T
B_36_938_0 ; real_T B_36_940_0 ; real_T B_36_941_0 ; real_T B_36_944_0 ;
real_T B_36_945_0 ; real_T B_36_946_0 ; real_T B_36_947_0 ; real_T B_36_948_0
; real_T B_36_949_0 ; real_T B_36_950_0 ; real_T B_36_952_0 ; real_T
B_36_954_0 ; real_T B_36_955_0 ; real_T B_36_956_0 ; real_T B_36_957_0 ;
real_T B_36_958_0 ; real_T B_36_959_0 ; real_T B_36_963_0 ; real_T B_36_964_0
; real_T B_36_965_0 ; real_T B_36_966_0 ; real_T B_36_967_0 ; real_T
B_36_968_0 ; real_T B_36_969_0 ; real_T B_36_972_0 ; real_T B_36_973_0 ;
real_T B_36_974_0 ; real_T B_36_975_0 ; real_T B_36_976_0 ; real_T B_36_977_0
; real_T B_36_978_0 ; real_T B_36_979_0 ; real_T B_36_980_0 ; real_T
B_36_981_0 ; real_T B_36_982_0 ; real_T B_36_983_0 ; real_T B_36_984_0 ;
real_T B_36_985_0 ; real_T B_36_986_0 ; real_T B_36_989_0 ; real_T B_36_990_0
; real_T B_36_991_0 ; real_T B_36_992_0 ; real_T B_36_994_0 ; real_T
B_36_995_0 ; real_T B_36_996_0 ; real_T B_36_997_0 ; real_T B_36_998_0 ;
real_T B_36_999_0 ; real_T B_36_1000_0 ; real_T B_36_1001_0 ; real_T
B_36_1002_0 ; real_T B_36_1003_0 ; real_T B_36_1004_0 ; real_T B_36_1006_0 ;
real_T B_36_1007_0 ; real_T B_36_1011_0 ; real_T B_36_1012_0 ; real_T
B_36_1013_0 ; real_T B_36_1014_0 ; real_T B_36_1015_0 ; real_T B_36_1016_0 ;
real_T B_36_1017_0 ; real_T B_36_1018_0 ; real_T B_36_1019_0 ; real_T
B_36_1020_0 ; real_T B_36_1021_0 ; real_T B_36_1023_0 ; real_T B_36_1025_0 ;
real_T B_36_1026_0 ; real_T B_36_1027_0 ; real_T B_36_1028_0 ; real_T
B_36_1029_0 ; real_T B_36_1030_0 ; real_T B_36_1034_0 ; real_T B_36_1035_0 ;
real_T B_36_1036_0 ; real_T B_36_1037_0 ; real_T B_36_1038_0 ; real_T
B_36_1039_0 ; real_T B_36_1040_0 ; real_T B_36_1043_0 ; real_T B_36_1044_0 ;
real_T B_36_1045_0 ; real_T B_36_1046_0 ; real_T B_36_1047_0 ; real_T
B_36_1048_0 ; real_T B_36_1049_0 ; real_T B_36_1050_0 ; real_T B_36_1051_0 ;
real_T B_36_1052_0 ; real_T B_36_1053_0 ; real_T B_36_1054_0 ; real_T
B_36_1055_0 ; real_T B_36_1056_0 ; real_T B_36_1057_0 ; real_T B_36_1060_0 ;
real_T B_36_1061_0 ; real_T B_36_1062_0 ; real_T B_36_1063_0 ; real_T
B_36_1065_0 ; real_T B_36_1066_0 ; real_T B_36_1067_0 ; real_T B_36_1068_0 ;
real_T B_36_1069_0 ; real_T B_36_1070_0 ; real_T B_36_1071_0 ; real_T
B_36_1072_0 ; real_T B_36_1073_0 ; real_T B_36_1074_0 ; real_T B_36_1075_0 ;
real_T B_36_1076_0 ; real_T B_36_1077_0 ; real_T B_36_1078_0 ; real_T
B_36_1080_0 ; real_T B_36_1081_0 ; real_T B_36_1082_0 ; real_T B_36_1083_0 ;
real_T B_36_1084_0 ; real_T B_36_1085_0 ; real_T B_36_1086_0 ; real_T
B_36_1088_0 ; real_T B_36_1090_0 ; real_T B_36_1091_0 ; real_T B_36_1092_0 ;
real_T B_36_1093_0 ; real_T B_36_1094_0 ; real_T B_36_1095_0 ; real_T
B_36_1099_0 ; real_T B_36_1100_0 ; real_T B_36_1101_0 ; real_T B_36_1102_0 ;
real_T B_36_1103_0 ; real_T B_36_1104_0 ; real_T B_36_1105_0 ; real_T
B_36_1108_0 ; real_T B_36_1109_0 ; real_T B_36_1110_0 ; real_T B_36_1111_0 ;
real_T B_36_1112_0 ; real_T B_36_1113_0 ; real_T B_36_1114_0 ; real_T
B_36_1115_0 ; real_T B_36_1116_0 ; real_T B_36_1117_0 ; real_T B_36_1118_0 ;
real_T B_36_1119_0 ; real_T B_36_1120_0 ; real_T B_36_1121_0 ; real_T
B_36_1122_0 ; real_T B_36_1125_0 ; real_T B_36_1126_0 ; real_T B_36_1127_0 ;
real_T B_36_1128_0 ; real_T B_36_1130_0 ; real_T B_36_1131_0 ; real_T
B_36_1132_0 ; real_T B_36_1133_0 ; real_T B_36_1135_0 ; real_T B_36_1136_0 ;
real_T B_36_1137_0 ; real_T B_36_1138_0 ; real_T B_36_1139_0 ; real_T
B_36_1140_0 ; real_T B_36_1141_0 ; real_T B_36_1142_0 ; real_T B_36_1143_0 ;
real_T B_36_1144_0 ; real_T B_36_1145_0 ; real_T B_36_1146_0 ; real_T
B_36_1147_0 ; real_T B_36_1151_0 ; real_T B_36_1152_0 ; real_T B_36_1153_0 ;
real_T B_36_1154_0 ; real_T B_36_1155_0 ; real_T B_36_1156_0 ; real_T
B_36_1157_0 ; real_T B_36_1159_0 ; real_T B_36_1161_0 ; real_T B_36_1162_0 ;
real_T B_36_1163_0 ; real_T B_36_1164_0 ; real_T B_36_1165_0 ; real_T
B_36_1166_0 ; real_T B_36_1170_0 ; real_T B_36_1171_0 ; real_T B_36_1172_0 ;
real_T B_36_1173_0 ; real_T B_36_1174_0 ; real_T B_36_1175_0 ; real_T
B_36_1176_0 ; real_T B_36_1179_0 ; real_T B_36_1180_0 ; real_T B_36_1181_0 ;
real_T B_36_1182_0 ; real_T B_36_1183_0 ; real_T B_36_1184_0 ; real_T
B_36_1185_0 ; real_T B_36_1186_0 ; real_T B_36_1187_0 ; real_T B_36_1188_0 ;
real_T B_36_1189_0 ; real_T B_36_1190_0 ; real_T B_36_1191_0 ; real_T
B_36_1192_0 ; real_T B_36_1193_0 ; real_T B_36_1196_0 ; real_T B_36_1197_0 ;
real_T B_36_1198_0 ; real_T B_36_1199_0 ; real_T B_36_1201_0 ; real_T
B_36_1202_0 ; real_T B_36_1203_0 ; real_T B_36_1204_0 ; real_T B_36_1205_0 ;
real_T B_36_1206_0 ; real_T B_36_1207_0 ; real_T B_36_1208_0 ; real_T
B_36_1209_0 ; real_T B_36_1210_0 ; real_T B_36_1211_0 ; real_T B_36_1213_0 ;
real_T B_36_1214_0 ; real_T B_36_1216_0 ; real_T B_36_1217_0 ; real_T
B_36_1218_0 ; real_T B_36_1219_0 ; real_T B_36_1220_0 ; real_T B_36_1221_0 ;
real_T B_36_1222_0 ; real_T B_36_1223_0 ; real_T B_36_1224_0 ; real_T
B_36_1225_0 ; real_T B_36_1226_0 ; real_T B_36_1227_0 ; real_T B_36_1228_0 ;
real_T B_36_1229_0 ; real_T B_36_1230_0 ; real_T B_36_1231_0 ; real_T
B_36_1234_0 ; real_T B_36_1235_0 ; real_T B_36_1236_0 ; real_T B_36_1237_0 ;
real_T B_36_1238_0 ; real_T B_36_1241_0 ; real_T B_36_1242_0 ; real_T
B_36_1243_0 ; real_T B_36_1244_0 ; real_T B_36_1245_0 ; real_T B_36_1246_0 ;
real_T B_36_1248_0 ; real_T B_36_1250_0 ; real_T B_36_1251_0 ; real_T
B_36_1252_0 ; real_T B_36_1253_0 ; real_T B_36_1254_0 ; real_T B_36_1255_0 ;
real_T B_36_1256_0 ; real_T B_36_1257_0 ; real_T B_36_1258_0 ; real_T
B_36_1261_0 ; real_T B_36_1262_0 ; real_T B_36_1263_0 ; real_T B_36_1264_0 ;
real_T B_36_1265_0 ; real_T B_36_1266_0 ; real_T B_36_1267_0 ; real_T
B_36_1268_0 ; real_T B_36_1269_0 ; real_T B_36_1270_0 ; real_T B_36_1272_0 ;
real_T B_36_1273_0 ; real_T B_36_1274_0 ; real_T B_36_1276_0 ; real_T
B_36_1277_0 ; real_T B_36_1278_0 ; real_T B_36_1279_0 ; real_T B_36_1282_0 ;
real_T B_36_1283_0 ; real_T B_36_1284_0 ; real_T B_36_1285_0 ; real_T
B_36_1286_0 ; real_T B_36_1287_0 ; real_T B_36_1288_0 ; real_T B_36_1289_0 ;
real_T B_36_1290_0 ; real_T B_36_1292_0 ; real_T B_36_1293_0 ; real_T
B_36_1294_0 ; real_T B_36_1295_0 ; real_T B_36_1296_0 ; real_T B_36_1297_0 ;
real_T B_36_1300_0 ; real_T B_36_1301_0 ; real_T B_36_1302_0 ; real_T
B_36_1303_0 ; real_T B_36_1304_0 ; real_T B_36_1307_0 ; real_T B_36_1308_0 ;
real_T B_36_1309_0 ; real_T B_36_1310_0 ; real_T B_36_1311_0 ; real_T
B_36_1312_0 ; real_T B_36_1314_0 ; real_T B_36_1316_0 ; real_T B_36_1317_0 ;
real_T B_36_1318_0 ; real_T B_36_1319_0 ; real_T B_36_1320_0 ; real_T
B_36_1321_0 ; real_T B_36_1322_0 ; real_T B_36_1323_0 ; real_T B_36_1324_0 ;
real_T B_36_1327_0 ; real_T B_36_1328_0 ; real_T B_36_1329_0 ; real_T
B_36_1330_0 ; real_T B_36_1331_0 ; real_T B_36_1332_0 ; real_T B_36_1333_0 ;
real_T B_36_1334_0 ; real_T B_36_1335_0 ; real_T B_36_1336_0 ; real_T
B_36_1338_0 ; real_T B_36_1339_0 ; real_T B_36_1340_0 ; real_T B_36_1342_0 ;
real_T B_36_1343_0 ; real_T B_36_1344_0 ; real_T B_36_1345_0 ; real_T
B_36_1350_0 [ 3 ] ; real_T B_36_1355_0 [ 6 ] ; real_T B_36_1366_0 [ 9 ] ;
real_T B_36_1368_0 ; real_T B_36_1370_0 ; real_T B_36_1376_0 ; real_T
B_36_1377_0 ; real_T B_36_1378_0 ; real_T B_36_1379_0 ; real_T B_36_1380_0 ;
real_T B_36_1381_0 ; real_T B_36_1382_0 ; real_T B_36_1384_0 ; real_T
B_36_1386_0 ; real_T B_36_1387_0 ; real_T B_36_1388_0 ; real_T B_36_1389_0 ;
real_T B_36_1390_0 ; real_T B_36_1391_0 ; real_T B_36_1395_0 ; real_T
B_36_1396_0 ; real_T B_36_1397_0 ; real_T B_36_1398_0 ; real_T B_36_1399_0 ;
real_T B_36_1400_0 ; real_T B_36_1401_0 ; real_T B_36_1404_0 ; real_T
B_36_1405_0 ; real_T B_36_1406_0 ; real_T B_36_1407_0 ; real_T B_36_1408_0 ;
real_T B_36_1409_0 ; real_T B_36_1410_0 ; real_T B_36_1411_0 ; real_T
B_36_1412_0 ; real_T B_36_1413_0 ; real_T B_36_1414_0 ; real_T B_36_1415_0 ;
real_T B_36_1416_0 ; real_T B_36_1417_0 ; real_T B_36_1418_0 ; real_T
B_36_1421_0 ; real_T B_36_1422_0 ; real_T B_36_1423_0 ; real_T B_36_1424_0 ;
real_T B_36_1426_0 ; real_T B_36_1427_0 ; real_T B_36_1428_0 ; real_T
B_36_1429_0 ; real_T B_36_1430_0 ; real_T B_36_1431_0 ; real_T B_36_1432_0 ;
real_T B_36_1433_0 ; real_T B_36_1434_0 ; real_T B_36_1435_0 ; real_T
B_36_1436_0 ; real_T B_36_1438_0 ; real_T B_36_1439_0 ; real_T B_36_1442_0 ;
real_T B_36_1443_0 ; real_T B_36_1444_0 ; real_T B_36_1445_0 ; real_T
B_36_1446_0 ; real_T B_36_1447_0 ; real_T B_36_1448_0 ; real_T B_36_1450_0 ;
real_T B_36_1452_0 ; real_T B_36_1453_0 ; real_T B_36_1454_0 ; real_T
B_36_1455_0 ; real_T B_36_1456_0 ; real_T B_36_1457_0 ; real_T B_36_1461_0 ;
real_T B_36_1462_0 ; real_T B_36_1463_0 ; real_T B_36_1464_0 ; real_T
B_36_1465_0 ; real_T B_36_1466_0 ; real_T B_36_1467_0 ; real_T B_36_1470_0 ;
real_T B_36_1471_0 ; real_T B_36_1472_0 ; real_T B_36_1473_0 ; real_T
B_36_1474_0 ; real_T B_36_1475_0 ; real_T B_36_1476_0 ; real_T B_36_1477_0 ;
real_T B_36_1478_0 ; real_T B_36_1479_0 ; real_T B_36_1480_0 ; real_T
B_36_1481_0 ; real_T B_36_1482_0 ; real_T B_36_1483_0 ; real_T B_36_1484_0 ;
real_T B_36_1487_0 ; real_T B_36_1488_0 ; real_T B_36_1489_0 ; real_T
B_36_1490_0 ; real_T B_36_1492_0 ; real_T B_36_1493_0 ; real_T B_36_1494_0 ;
real_T B_36_1495_0 ; real_T B_36_1496_0 ; real_T B_36_1497_0 ; real_T
B_36_1498_0 ; real_T B_36_1499_0 ; real_T B_36_1500_0 ; real_T B_36_1501_0 ;
real_T B_36_1502_0 ; real_T B_36_1504_0 ; real_T B_36_1505_0 ; real_T
B_36_1509_0 ; real_T B_36_1510_0 ; real_T B_36_1511_0 ; real_T B_36_1512_0 ;
real_T B_36_1513_0 ; real_T B_36_1514_0 ; real_T B_36_1515_0 ; real_T
B_36_1516_0 ; real_T B_36_1517_0 ; real_T B_36_1518_0 ; real_T B_36_1519_0 ;
real_T B_36_1521_0 ; real_T B_36_1523_0 ; real_T B_36_1524_0 ; real_T
B_36_1525_0 ; real_T B_36_1526_0 ; real_T B_36_1527_0 ; real_T B_36_1528_0 ;
real_T B_36_1532_0 ; real_T B_36_1533_0 ; real_T B_36_1534_0 ; real_T
B_36_1535_0 ; real_T B_36_1536_0 ; real_T B_36_1537_0 ; real_T B_36_1538_0 ;
real_T B_36_1541_0 ; real_T B_36_1542_0 ; real_T B_36_1543_0 ; real_T
B_36_1544_0 ; real_T B_36_1545_0 ; real_T B_36_1546_0 ; real_T B_36_1547_0 ;
real_T B_36_1548_0 ; real_T B_36_1549_0 ; real_T B_36_1550_0 ; real_T
B_36_1551_0 ; real_T B_36_1552_0 ; real_T B_36_1553_0 ; real_T B_36_1554_0 ;
real_T B_36_1555_0 ; real_T B_36_1558_0 ; real_T B_36_1559_0 ; real_T
B_36_1560_0 ; real_T B_36_1561_0 ; real_T B_36_1563_0 ; real_T B_36_1564_0 ;
real_T B_36_1565_0 ; real_T B_36_1566_0 ; real_T B_36_1567_0 ; real_T
B_36_1568_0 ; real_T B_36_1569_0 ; real_T B_36_1570_0 ; real_T B_36_1571_0 ;
real_T B_36_1572_0 ; real_T B_36_1573_0 ; real_T B_36_1574_0 ; real_T
B_36_1575_0 ; real_T B_36_1576_0 ; real_T B_36_1578_0 ; real_T B_36_1579_0 ;
real_T B_36_1580_0 ; real_T B_36_1581_0 ; real_T B_36_1582_0 ; real_T
B_36_1583_0 ; real_T B_36_1584_0 ; real_T B_36_1586_0 ; real_T B_36_1588_0 ;
real_T B_36_1589_0 ; real_T B_36_1590_0 ; real_T B_36_1591_0 ; real_T
B_36_1592_0 ; real_T B_36_1593_0 ; real_T B_36_1597_0 ; real_T B_36_1598_0 ;
real_T B_36_1599_0 ; real_T B_36_1600_0 ; real_T B_36_1601_0 ; real_T
B_36_1602_0 ; real_T B_36_1603_0 ; real_T B_36_1606_0 ; real_T B_36_1607_0 ;
real_T B_36_1608_0 ; real_T B_36_1609_0 ; real_T B_36_1610_0 ; real_T
B_36_1611_0 ; real_T B_36_1612_0 ; real_T B_36_1613_0 ; real_T B_36_1614_0 ;
real_T B_36_1615_0 ; real_T B_36_1616_0 ; real_T B_36_1617_0 ; real_T
B_36_1618_0 ; real_T B_36_1619_0 ; real_T B_36_1620_0 ; real_T B_36_1623_0 ;
real_T B_36_1624_0 ; real_T B_36_1625_0 ; real_T B_36_1626_0 ; real_T
B_36_1628_0 ; real_T B_36_1629_0 ; real_T B_36_1631_0 ; real_T B_36_1632_0 ;
real_T B_36_1633_0 ; real_T B_36_1634_0 ; real_T B_36_1635_0 ; real_T
B_36_1636_0 ; real_T B_36_1637_0 ; real_T B_36_1638_0 ; real_T B_36_1639_0 ;
real_T B_36_1640_0 ; real_T B_36_1641_0 ; real_T B_36_1642_0 ; real_T
B_36_1643_0 ; real_T B_36_1645_0 ; real_T B_36_1647_0 ; real_T B_36_1652_0 ;
real_T B_36_1654_0 ; real_T B_36_1661_0 ; real_T B_36_1662_0 ; real_T
B_36_1663_0 ; real_T B_36_1664_0 ; real_T B_36_1665_0 ; real_T B_36_1666_0 ;
real_T B_36_1667_0 ; real_T B_36_1669_0 ; real_T B_36_1671_0 ; real_T
B_36_1672_0 ; real_T B_36_1673_0 ; real_T B_36_1674_0 ; real_T B_36_1675_0 ;
real_T B_36_1676_0 ; real_T B_36_1680_0 ; real_T B_36_1681_0 ; real_T
B_36_1682_0 ; real_T B_36_1683_0 ; real_T B_36_1684_0 ; real_T B_36_1685_0 ;
real_T B_36_1686_0 ; real_T B_36_1689_0 ; real_T B_36_1690_0 ; real_T
B_36_1691_0 ; real_T B_36_1692_0 ; real_T B_36_1693_0 ; real_T B_36_1694_0 ;
real_T B_36_1695_0 ; real_T B_36_1696_0 ; real_T B_36_1697_0 ; real_T
B_36_1698_0 ; real_T B_36_1699_0 ; real_T B_36_1700_0 ; real_T B_36_1701_0 ;
real_T B_36_1702_0 ; real_T B_36_1703_0 ; real_T B_36_1706_0 ; real_T
B_36_1707_0 ; real_T B_36_1708_0 ; real_T B_36_1709_0 ; real_T B_36_1711_0 ;
real_T B_36_1712_0 ; real_T B_36_1713_0 ; real_T B_36_1714_0 ; real_T
B_36_1715_0 ; real_T B_36_1716_0 ; real_T B_36_1717_0 ; real_T B_36_1718_0 ;
real_T B_36_1719_0 ; real_T B_36_1720_0 ; real_T B_36_1721_0 ; real_T
B_36_1723_0 ; real_T B_36_1724_0 ; real_T B_36_1726_0 ; real_T B_36_1727_0 ;
real_T B_36_1728_0 ; real_T B_36_1729_0 ; real_T B_36_1730_0 ; real_T
B_36_1731_0 ; real_T B_36_1732_0 ; real_T B_36_1733_0 ; real_T B_36_1734_0 ;
real_T B_36_1735_0 ; real_T B_36_1736_0 ; real_T B_36_1737_0 ; real_T
B_36_1738_0 ; real_T B_36_1739_0 ; real_T B_36_1740_0 ; real_T B_36_1741_0 ;
real_T B_36_1744_0 ; real_T B_36_1745_0 ; real_T B_36_1746_0 ; real_T
B_36_1747_0 ; real_T B_36_1748_0 ; real_T B_36_1751_0 ; real_T B_36_1752_0 ;
real_T B_36_1753_0 ; real_T B_36_1754_0 ; real_T B_36_1755_0 ; real_T
B_36_1756_0 ; real_T B_36_1758_0 ; real_T B_36_1760_0 ; real_T B_36_1761_0 ;
real_T B_36_1762_0 ; real_T B_36_1763_0 ; real_T B_36_1764_0 ; real_T
B_36_1765_0 ; real_T B_36_1766_0 ; real_T B_36_1767_0 ; real_T B_36_1768_0 ;
real_T B_36_1771_0 ; real_T B_36_1772_0 ; real_T B_36_1773_0 ; real_T
B_36_1774_0 ; real_T B_36_1775_0 ; real_T B_36_1776_0 ; real_T B_36_1777_0 ;
real_T B_36_1778_0 ; real_T B_36_1779_0 ; real_T B_36_1780_0 ; real_T
B_36_1782_0 ; real_T B_36_1783_0 ; real_T B_36_1784_0 ; real_T B_36_1786_0 ;
real_T B_36_1787_0 ; real_T B_36_1788_0 ; real_T B_36_1789_0 ; real_T
B_36_1792_0 ; real_T B_36_1793_0 ; real_T B_36_1794_0 ; real_T B_36_1795_0 ;
real_T B_36_1796_0 ; real_T B_36_1797_0 ; real_T B_36_1798_0 ; real_T
B_36_1799_0 ; real_T B_36_1800_0 ; real_T B_36_1802_0 ; real_T B_36_1803_0 ;
real_T B_36_1804_0 ; real_T B_36_1805_0 ; real_T B_36_1806_0 ; real_T
B_36_1807_0 ; real_T B_36_1810_0 ; real_T B_36_1811_0 ; real_T B_36_1812_0 ;
real_T B_36_1813_0 ; real_T B_36_1814_0 ; real_T B_36_1817_0 ; real_T
B_36_1818_0 ; real_T B_36_1819_0 ; real_T B_36_1820_0 ; real_T B_36_1821_0 ;
real_T B_36_1822_0 ; real_T B_36_1824_0 ; real_T B_36_1826_0 ; real_T
B_36_1827_0 ; real_T B_36_1828_0 ; real_T B_36_1829_0 ; real_T B_36_1830_0 ;
real_T B_36_1831_0 ; real_T B_36_1832_0 ; real_T B_36_1833_0 ; real_T
B_36_1834_0 ; real_T B_36_1837_0 ; real_T B_36_1838_0 ; real_T B_36_1839_0 ;
real_T B_36_1840_0 ; real_T B_36_1841_0 ; real_T B_36_1842_0 ; real_T
B_36_1843_0 ; real_T B_36_1844_0 ; real_T B_36_1845_0 ; real_T B_36_1846_0 ;
real_T B_36_1848_0 ; real_T B_36_1849_0 ; real_T B_36_1850_0 ; real_T
B_36_1852_0 ; real_T B_36_1853_0 ; real_T B_36_1854_0 ; real_T B_36_1855_0 ;
real_T B_35_0_1 [ 30 ] ; real_T B_34_0_1 [ 30 ] ; real_T B_32_0_0 ; real_T
B_24_0_0 ; real_T B_22_0_0 ; real_T B_14_0_0 ; real_T B_36_799_0 [ 38 ] ;
real_T B_36_804_0 [ 14 ] ; real_T B_36_844_0 [ 6 ] ; real_T B_36_848_0 [ 6 ]
; boolean_T B_36_6_0 ; boolean_T B_36_13_0 ; boolean_T B_36_17_0 ; boolean_T
B_36_39_0 ; boolean_T B_36_46_0 ; boolean_T B_36_50_0 ; boolean_T B_36_722_0
; boolean_T B_36_729_0 ; boolean_T B_36_774_0 ; boolean_T B_36_781_0 ;
boolean_T B_36_1373_0 ; boolean_T B_36_1650_0 ; boolean_T B_36_1657_0 ;
char_T pad_B_36_1657_0 [ 3 ] ; B_StancePhase_nmm2DFullBody_g_T StancePhase_b
; B_SwingPhase_nmm2DFullBody_a_T SwingPhase_i ;
B_StancePhase_nmm2DFullBody_e_T StancePhase_n ;
B_SwingPhase_nmm2DFullBody_n_T SwingPhase_m ; B_StancePhase_nmm2DFullBody_j_T
StancePhase_j ; B_StancePhase_nmm2DFullBody_o_T StancePhase_k ;
B_SwingPhase_nmm2DFullBody_T SwingPhase_j ; B_StancePhase_nmm2DFullBody_T
StancePhase_a ; B_StancePhase_nmm2DFullBody_g_T StancePhase_g ;
B_SwingPhase_nmm2DFullBody_a_T SwingPhase_f ; B_StancePhase_nmm2DFullBody_e_T
StancePhase_l ; B_SwingPhase_nmm2DFullBody_n_T SwingPhase_b ;
B_StancePhase_nmm2DFullBody_j_T StancePhase_o ;
B_StancePhase_nmm2DFullBody_o_T StancePhase_i ; B_SwingPhase_nmm2DFullBody_T
SwingPhase_k ; B_StancePhase_nmm2DFullBody_T StancePhase ;
B_LeftForcePlate_nmm2DFullBody_T RightForcePlate ;
B_GroundFrictionModel_nmm2DFullBody_T GroundFrictionModel_i ;
B_GroundFrictionModel_nmm2DFullBody_T GroundFrictionModel_j ;
B_LeftForcePlate_nmm2DFullBody_T LeftForcePlate ;
B_GroundFrictionModel_nmm2DFullBody_T GroundFrictionModel_m ;
B_GroundFrictionModel_nmm2DFullBody_T GroundFrictionModel ; }
B_nmm2DFullBody_T ; typedef struct { real_T Memory_PreviousInput ; real_T
Memory_PreviousInput_i ; real_T Memory3_PreviousInput ; real_T
Memory_PreviousInput_a ; struct { real_T modelTStart ; }
BodyPitchloopdelay_RWORK ; struct { real_T modelTStart ; }
BodyPitchloopdelay_RWORK_i ; struct { real_T modelTStart ; }
LThighafferentdelay_RWORK ; struct { real_T modelTStart ; }
LStanceafferentdelay_RWORK ; struct { real_T modelTStart ; }
RStanceafferentdelay_RWORK ; struct { real_T modelTStart ; }
GLUFmloopdelay_RWORK ; struct { real_T modelTStart ; } HFLLceloopdelay_RWORK
; struct { real_T modelTStart ; } HAMLceloopdelay_RWORK ; struct { real_T
modelTStart ; } HAMFmloopdelay_RWORK ; struct { real_T modelTStart ; }
LKneeloopdelay_RWORK ; struct { real_T modelTStart ; }
RThighafferentdelay_RWORK ; struct { real_T modelTStart ; }
VASloopdelay_RWORK ; struct { real_T modelTStart ; } GASloopdelay_RWORK ;
struct { real_T modelTStart ; } SOLloopdelay_RWORK ; struct { real_T
modelTStart ; } TAloopdelay_RWORK ; struct { real_T modelTStart ; }
GLUFmloopdelay_RWORK_e ; struct { real_T modelTStart ; }
HFLLceloopdelay_RWORK_c ; struct { real_T modelTStart ; }
HAMLceloopdelay_RWORK_a ; struct { real_T modelTStart ; }
HAMFmloopdelay_RWORK_j ; struct { real_T modelTStart ; } RKneeloopdelay_RWORK
; struct { real_T modelTStart ; } VASloopdelay_RWORK_b ; struct { real_T
modelTStart ; } GASloopdelay_RWORK_e ; struct { real_T modelTStart ; }
SOLloopdelay_RWORK_f ; struct { real_T modelTStart ; } TAloopdelay_RWORK_e ;
void * Block1_PWORK ; void * R_GRF_PWORK [ 3 ] ; void * ToWorkspace_PWORK ;
void * L_GRF_PWORK [ 3 ] ; void * Scope1_PWORK ; void * ToWorkspace_PWORK_l ;
void * Scope_PWORK ; void * Block2_PWORK ; void * Block3_PWORK ; struct {
void * TUbufferPtrs [ 2 ] ; } BodyPitchloopdelay_PWORK ; struct { void *
TUbufferPtrs [ 2 ] ; } BodyPitchloopdelay_PWORK_j ; struct { void *
TUbufferPtrs [ 2 ] ; } LThighafferentdelay_PWORK ; struct { void *
TUbufferPtrs [ 2 ] ; } LStanceafferentdelay_PWORK ; struct { void *
TUbufferPtrs [ 2 ] ; } RStanceafferentdelay_PWORK ; struct { void *
TUbufferPtrs [ 2 ] ; } GLUFmloopdelay_PWORK ; struct { void * TUbufferPtrs [
2 ] ; } HFLLceloopdelay_PWORK ; struct { void * TUbufferPtrs [ 2 ] ; }
HAMLceloopdelay_PWORK ; struct { void * TUbufferPtrs [ 2 ] ; }
HAMFmloopdelay_PWORK ; struct { void * TUbufferPtrs [ 2 ] ; }
LKneeloopdelay_PWORK ; struct { void * TUbufferPtrs [ 2 ] ; }
RThighafferentdelay_PWORK ; struct { void * TUbufferPtrs [ 2 ] ; }
VASloopdelay_PWORK ; struct { void * TUbufferPtrs [ 2 ] ; }
GASloopdelay_PWORK ; struct { void * TUbufferPtrs [ 2 ] ; }
SOLloopdelay_PWORK ; struct { void * TUbufferPtrs [ 2 ] ; } TAloopdelay_PWORK
; struct { void * TUbufferPtrs [ 2 ] ; } GLUFmloopdelay_PWORK_g ; struct {
void * TUbufferPtrs [ 2 ] ; } HFLLceloopdelay_PWORK_g ; struct { void *
TUbufferPtrs [ 2 ] ; } HAMLceloopdelay_PWORK_d ; struct { void * TUbufferPtrs
[ 2 ] ; } HAMFmloopdelay_PWORK_h ; struct { void * TUbufferPtrs [ 2 ] ; }
RKneeloopdelay_PWORK ; struct { void * TUbufferPtrs [ 2 ] ; }
VASloopdelay_PWORK_o ; struct { void * TUbufferPtrs [ 2 ] ; }
GASloopdelay_PWORK_f ; struct { void * TUbufferPtrs [ 2 ] ; }
SOLloopdelay_PWORK_c ; struct { void * TUbufferPtrs [ 2 ] ; }
TAloopdelay_PWORK_d ; void * ToWorkspace1_PWORK ; void * ToWorkspace_PWORK_m
; void * ToWorkspace_PWORK_f ; void * ToWorkspace_PWORK_n ; void *
ToWorkspace1_PWORK_k ; void * ToWorkspace1_PWORK_j ; void *
ToWorkspace_PWORK_lx ; void * ToWorkspace_PWORK_a ; void *
ToWorkspace_PWORK_h ; void * ToWorkspace2_PWORK ; void *
ToCurrentWorkspace2_PWORK ; void * ToWorkspace_PWORK_k ; void *
ToWorkspace1_PWORK_i ; void * ToWorkspace2_PWORK_b ; void * StimGAS_PWORK ;
void * StimGLU_PWORK ; void * StimHAM_PWORK ; void * StimHFL_PWORK ; void *
StimSOL_PWORK ; void * StimTA_PWORK ; void * StimVAS_PWORK ; void *
ToWorkspace_PWORK_fz ; void * ToWorkspace1_PWORK_p ; void *
ToWorkspace2_PWORK_e ; void * StimGAS_PWORK_p ; void * StimGLU_PWORK_o ; void
* StimHAM_PWORK_f ; void * StimHFL_PWORK_j ; void * StimSOL_PWORK_c ; void *
StimTA_PWORK_c ; void * StimVAS_PWORK_b ; void * Scope2_PWORK [ 2 ] ; void *
Scope_PWORK_b ; int32_T MATLABFunction_sysIdxToRun ; int32_T
MATLABFunction_sysIdxToRun_o ; int32_T SwingPhase_sysIdxToRun ; int32_T
SwingPhase_sysIdxToRun_h ; int32_T SwingPhase_sysIdxToRun_e ; int32_T
SwingPhase_sysIdxToRun_j ; int_T Block1_IWORK ; int_T Integrator_IWORK ;
int_T Integrator_IWORK_j ; int_T Integrator_IWORK_p ; int_T
Integrator_IWORK_f ; int_T Integrator_IWORK_i ; int_T Integrator_IWORK_o ;
int_T Integrator_IWORK_pr ; int_T Integrator_IWORK_g ; int_T
Integrator_IWORK_h ; int_T Integrator_IWORK_hf ; int_T Integrator_IWORK_m ;
int_T Integrator_IWORK_jn ; int_T Integrator_IWORK_pk ; int_T
Integrator_IWORK_fi ; int_T Block3_IWORK ; struct { int_T Tail ; int_T Head ;
int_T Last ; int_T CircularBufSize ; int_T MaxNewBufSize ; }
BodyPitchloopdelay_IWORK ; struct { int_T Tail ; int_T Head ; int_T Last ;
int_T CircularBufSize ; int_T MaxNewBufSize ; } BodyPitchloopdelay_IWORK_d ;
struct { int_T Tail ; int_T Head ; int_T Last ; int_T CircularBufSize ; int_T
MaxNewBufSize ; } LThighafferentdelay_IWORK ; struct { int_T Tail ; int_T
Head ; int_T Last ; int_T CircularBufSize ; int_T MaxNewBufSize ; }
LStanceafferentdelay_IWORK ; struct { int_T Tail ; int_T Head ; int_T Last ;
int_T CircularBufSize ; int_T MaxNewBufSize ; } RStanceafferentdelay_IWORK ;
struct { int_T Tail ; int_T Head ; int_T Last ; int_T CircularBufSize ; int_T
MaxNewBufSize ; } GLUFmloopdelay_IWORK ; struct { int_T Tail ; int_T Head ;
int_T Last ; int_T CircularBufSize ; int_T MaxNewBufSize ; }
HFLLceloopdelay_IWORK ; struct { int_T Tail ; int_T Head ; int_T Last ; int_T
CircularBufSize ; int_T MaxNewBufSize ; } HAMLceloopdelay_IWORK ; struct {
int_T Tail ; int_T Head ; int_T Last ; int_T CircularBufSize ; int_T
MaxNewBufSize ; } HAMFmloopdelay_IWORK ; struct { int_T Tail ; int_T Head ;
int_T Last ; int_T CircularBufSize ; int_T MaxNewBufSize ; }
LKneeloopdelay_IWORK ; struct { int_T Tail ; int_T Head ; int_T Last ; int_T
CircularBufSize ; int_T MaxNewBufSize ; } RThighafferentdelay_IWORK ; struct
{ int_T Tail ; int_T Head ; int_T Last ; int_T CircularBufSize ; int_T
MaxNewBufSize ; } VASloopdelay_IWORK ; struct { int_T Tail ; int_T Head ;
int_T Last ; int_T CircularBufSize ; int_T MaxNewBufSize ; }
GASloopdelay_IWORK ; struct { int_T Tail ; int_T Head ; int_T Last ; int_T
CircularBufSize ; int_T MaxNewBufSize ; } SOLloopdelay_IWORK ; struct { int_T
Tail ; int_T Head ; int_T Last ; int_T CircularBufSize ; int_T MaxNewBufSize
; } TAloopdelay_IWORK ; struct { int_T Tail ; int_T Head ; int_T Last ; int_T
CircularBufSize ; int_T MaxNewBufSize ; } GLUFmloopdelay_IWORK_m ; struct {
int_T Tail ; int_T Head ; int_T Last ; int_T CircularBufSize ; int_T
MaxNewBufSize ; } HFLLceloopdelay_IWORK_p ; struct { int_T Tail ; int_T Head
; int_T Last ; int_T CircularBufSize ; int_T MaxNewBufSize ; }
HAMLceloopdelay_IWORK_e ; struct { int_T Tail ; int_T Head ; int_T Last ;
int_T CircularBufSize ; int_T MaxNewBufSize ; } HAMFmloopdelay_IWORK_l ;
struct { int_T Tail ; int_T Head ; int_T Last ; int_T CircularBufSize ; int_T
MaxNewBufSize ; } RKneeloopdelay_IWORK ; struct { int_T Tail ; int_T Head ;
int_T Last ; int_T CircularBufSize ; int_T MaxNewBufSize ; }
VASloopdelay_IWORK_p ; struct { int_T Tail ; int_T Head ; int_T Last ; int_T
CircularBufSize ; int_T MaxNewBufSize ; } GASloopdelay_IWORK_j ; struct {
int_T Tail ; int_T Head ; int_T Last ; int_T CircularBufSize ; int_T
MaxNewBufSize ; } SOLloopdelay_IWORK_a ; struct { int_T Tail ; int_T Head ;
int_T Last ; int_T CircularBufSize ; int_T MaxNewBufSize ; }
TAloopdelay_IWORK_o ; int_T RLegstartsDSup_MODE ; int_T DSupends_MODE ; int_T
LLegstartsDSup_MODE ; int_T Abs1_MODE ; int_T Abs_MODE ; int_T Abs_MODE_l ;
int_T Abs_MODE_a ; int_T Abs_MODE_f ; int_T Abs_MODE_ao ; int_T Abs_MODE_d ;
int_T Abs_MODE_a5 ; int_T Abs_MODE_m ; int_T Abs_MODE_h ; int_T Abs_MODE_he ;
int_T Abs_MODE_hi ; int_T Abs_MODE_i ; int_T Abs_MODE_c ; int_T Abs_MODE_di ;
int8_T SwingPhase_SubsysRanBC ; int8_T SwingPhase_SubsysRanBC_j ; int8_T
SwingPhase_SubsysRanBC_l ; int8_T SwingPhase_SubsysRanBC_d ; boolean_T
Compare_Mode ; boolean_T Compare_Mode_a ; boolean_T Compare_Mode_d ;
boolean_T Compare_Mode_h ; boolean_T Switch_Mode ; boolean_T Switch_Mode_m ;
boolean_T Switch_Mode_ma ; boolean_T Switch_Mode_g ; boolean_T Switch_Mode_c
; boolean_T Switch_Mode_a ; boolean_T Switch_Mode_d ; boolean_T Switch_Mode_p
; boolean_T Switch_Mode_aw ; boolean_T Switch_Mode_b ; boolean_T
Switch_Mode_k ; boolean_T Switch_Mode_mf ; boolean_T Switch_Mode_o ;
boolean_T Switch_Mode_k2 ; boolean_T Compare_Mode_m ; boolean_T
Switch_Mode_de ; boolean_T Switch_Mode_ou ; boolean_T Switch_Mode_kr ;
boolean_T Switch_Mode_ka ; boolean_T Switch_Mode_cj ; boolean_T Switch_Mode_e
; boolean_T Switch_Mode_m3 ; boolean_T Switch_Mode_cl ; boolean_T
Switch_Mode_f ; boolean_T Switch_Mode_n ; boolean_T Switch_Mode_h ; boolean_T
Switch_Mode_o2 ; boolean_T Switch_Mode_l ; boolean_T Switch_Mode_ol ;
boolean_T Switch_Mode_el ; boolean_T Switch_Mode_cu ; boolean_T
Switch_Mode_ow ; boolean_T Switch_Mode_ct ; boolean_T Switch_Mode_hx ;
boolean_T Switch_Mode_h2 ; boolean_T Switch_Mode_dei ; boolean_T
Switch_Mode_i ; boolean_T Switch_Mode_e0 ; boolean_T Switch_Mode_l1 ;
boolean_T Switch_Mode_nw ; boolean_T Switch_Mode_ed ; boolean_T
Switch_Mode_pd ; boolean_T Switch_Mode_nd ; boolean_T Switch_Mode_h2v ;
boolean_T Switch_Mode_ah ; boolean_T Switch_Mode_d4 ; boolean_T
Switch_Mode_pw ; boolean_T Switch_Mode_bf ; boolean_T Switch_Mode_j ;
boolean_T Switch_Mode_pc ; boolean_T Switch_Mode_b1 ; boolean_T
Switch_Mode_od ; boolean_T Switch_Mode_bv ; boolean_T Switch_Mode_det ;
boolean_T Switch_Mode_pn ; boolean_T Switch_Mode_ck ; boolean_T
Switch_Mode_cf ; boolean_T Switch_Mode_hh ; boolean_T Switch_Mode_mo ;
boolean_T Switch_Mode_nn ; boolean_T Switch_Mode_b2 ; boolean_T
Switch_Mode_cr ; boolean_T Switch_Mode_mm ; boolean_T Switch_Mode_by ;
boolean_T Switch_Mode_ai ; boolean_T Switch_Mode_kd ; boolean_T
Switch_Mode_my ; boolean_T SwingPhase_MODE ; boolean_T SwingPhase_MODE_k ;
boolean_T SwingPhase_MODE_p ; boolean_T SwingPhase_MODE_c ; char_T
pad_SwingPhase_MODE_c [ 1 ] ; DW_StancePhase_nmm2DFullBody_p_T StancePhase_b
; DW_SwingPhase_nmm2DFullBody_p_T SwingPhase_i ;
DW_StancePhase_nmm2DFullBody_l_T StancePhase_n ;
DW_SwingPhase_nmm2DFullBody_n_T SwingPhase_m ;
DW_StancePhase_nmm2DFullBody_in_T StancePhase_j ;
DW_StancePhase_nmm2DFullBody_i_T StancePhase_k ;
DW_SwingPhase_nmm2DFullBody_T SwingPhase_j ; DW_StancePhase_nmm2DFullBody_T
StancePhase_a ; DW_StancePhase_nmm2DFullBody_p_T StancePhase_g ;
DW_SwingPhase_nmm2DFullBody_p_T SwingPhase_f ;
DW_StancePhase_nmm2DFullBody_l_T StancePhase_l ;
DW_SwingPhase_nmm2DFullBody_n_T SwingPhase_b ;
DW_StancePhase_nmm2DFullBody_in_T StancePhase_o ;
DW_StancePhase_nmm2DFullBody_i_T StancePhase_i ;
DW_SwingPhase_nmm2DFullBody_T SwingPhase_k ; DW_StancePhase_nmm2DFullBody_T
StancePhase ; DW_LeftForcePlate_nmm2DFullBody_T RightForcePlate ;
DW_GroundFrictionModel_nmm2DFullBody_T GroundFrictionModel_i ;
DW_GroundFrictionModel_nmm2DFullBody_T GroundFrictionModel_j ;
DW_LeftForcePlate_nmm2DFullBody_T LeftForcePlate ;
DW_GroundFrictionModel_nmm2DFullBody_T GroundFrictionModel_m ;
DW_GroundFrictionModel_nmm2DFullBody_T GroundFrictionModel ; }
DW_nmm2DFullBody_T ; typedef struct { real_T
BodyMechanicsLayerfromGeyers2010model_RightAnkleJointR1Position [ 22 ] ;
real_T Integrator_CSTATE ; real_T Integrator_CSTATE_m ; real_T
Integrator_CSTATE_f ; real_T Integrator_CSTATE_k ; real_T Integrator_CSTATE_b
; real_T Integrator_CSTATE_p ; real_T Integrator_CSTATE_j ; real_T
Integrator_CSTATE_js ; real_T Integrator_CSTATE_h ; real_T
Integrator_CSTATE_i ; real_T Integrator_CSTATE_hj ; real_T
Integrator_CSTATE_n ; real_T Integrator_CSTATE_bt ; real_T
Integrator_CSTATE_be ; real_T smooth_CSTATE ; real_T smooth1_CSTATE ; real_T
StateSpace_CSTATE ; real_T StateSpace_CSTATE_f ; real_T StateSpace_CSTATE_a ;
real_T StateSpace_CSTATE_m ; real_T StateSpace_CSTATE_e ; real_T
StateSpace_CSTATE_ai ; real_T StateSpace_CSTATE_h ; real_T
StateSpace_CSTATE_i ; real_T StateSpace_CSTATE_ml ; real_T
StateSpace_CSTATE_p ; real_T StateSpace_CSTATE_po ; real_T
StateSpace_CSTATE_fw ; real_T StateSpace_CSTATE_h0 ; real_T
StateSpace_CSTATE_d ; } X_nmm2DFullBody_T ; typedef struct { real_T
BodyMechanicsLayerfromGeyers2010model_RightAnkleJointR1Position [ 22 ] ;
real_T Integrator_CSTATE ; real_T Integrator_CSTATE_m ; real_T
Integrator_CSTATE_f ; real_T Integrator_CSTATE_k ; real_T Integrator_CSTATE_b
; real_T Integrator_CSTATE_p ; real_T Integrator_CSTATE_j ; real_T
Integrator_CSTATE_js ; real_T Integrator_CSTATE_h ; real_T
Integrator_CSTATE_i ; real_T Integrator_CSTATE_hj ; real_T
Integrator_CSTATE_n ; real_T Integrator_CSTATE_bt ; real_T
Integrator_CSTATE_be ; real_T smooth_CSTATE ; real_T smooth1_CSTATE ; real_T
StateSpace_CSTATE ; real_T StateSpace_CSTATE_f ; real_T StateSpace_CSTATE_a ;
real_T StateSpace_CSTATE_m ; real_T StateSpace_CSTATE_e ; real_T
StateSpace_CSTATE_ai ; real_T StateSpace_CSTATE_h ; real_T
StateSpace_CSTATE_i ; real_T StateSpace_CSTATE_ml ; real_T
StateSpace_CSTATE_p ; real_T StateSpace_CSTATE_po ; real_T
StateSpace_CSTATE_fw ; real_T StateSpace_CSTATE_h0 ; real_T
StateSpace_CSTATE_d ; } XDot_nmm2DFullBody_T ; typedef struct { boolean_T
BodyMechanicsLayerfromGeyers2010model_RightAnkleJointR1Position [ 22 ] ;
boolean_T Integrator_CSTATE ; boolean_T Integrator_CSTATE_m ; boolean_T
Integrator_CSTATE_f ; boolean_T Integrator_CSTATE_k ; boolean_T
Integrator_CSTATE_b ; boolean_T Integrator_CSTATE_p ; boolean_T
Integrator_CSTATE_j ; boolean_T Integrator_CSTATE_js ; boolean_T
Integrator_CSTATE_h ; boolean_T Integrator_CSTATE_i ; boolean_T
Integrator_CSTATE_hj ; boolean_T Integrator_CSTATE_n ; boolean_T
Integrator_CSTATE_bt ; boolean_T Integrator_CSTATE_be ; boolean_T
smooth_CSTATE ; boolean_T smooth1_CSTATE ; boolean_T StateSpace_CSTATE ;
boolean_T StateSpace_CSTATE_f ; boolean_T StateSpace_CSTATE_a ; boolean_T
StateSpace_CSTATE_m ; boolean_T StateSpace_CSTATE_e ; boolean_T
StateSpace_CSTATE_ai ; boolean_T StateSpace_CSTATE_h ; boolean_T
StateSpace_CSTATE_i ; boolean_T StateSpace_CSTATE_ml ; boolean_T
StateSpace_CSTATE_p ; boolean_T StateSpace_CSTATE_po ; boolean_T
StateSpace_CSTATE_fw ; boolean_T StateSpace_CSTATE_h0 ; boolean_T
StateSpace_CSTATE_d ; } XDis_nmm2DFullBody_T ; typedef struct { real_T
BodyMechanicsLayerfromGeyers2010model_RightAnkleJointR1Position [ 22 ] ;
real_T Integrator_CSTATE ; real_T Integrator_CSTATE_m ; real_T
Integrator_CSTATE_f ; real_T Integrator_CSTATE_k ; real_T Integrator_CSTATE_b
; real_T Integrator_CSTATE_p ; real_T Integrator_CSTATE_j ; real_T
Integrator_CSTATE_js ; real_T Integrator_CSTATE_h ; real_T
Integrator_CSTATE_i ; real_T Integrator_CSTATE_hj ; real_T
Integrator_CSTATE_n ; real_T Integrator_CSTATE_bt ; real_T
Integrator_CSTATE_be ; real_T smooth_CSTATE ; real_T smooth1_CSTATE ; real_T
StateSpace_CSTATE ; real_T StateSpace_CSTATE_f ; real_T StateSpace_CSTATE_a ;
real_T StateSpace_CSTATE_m ; real_T StateSpace_CSTATE_e ; real_T
StateSpace_CSTATE_ai ; real_T StateSpace_CSTATE_h ; real_T
StateSpace_CSTATE_i ; real_T StateSpace_CSTATE_ml ; real_T
StateSpace_CSTATE_p ; real_T StateSpace_CSTATE_po ; real_T
StateSpace_CSTATE_fw ; real_T StateSpace_CSTATE_h0 ; real_T
StateSpace_CSTATE_d ; } CStateAbsTol_nmm2DFullBody_T ; typedef struct {
real_T Compare_RelopInput_ZC ; real_T Compare_RelopInput_ZC_e ; real_T
Compare_RelopInput_ZC_o ; real_T Compare_RelopInput_ZC_f ; real_T
Switch_SwitchCond_ZC ; real_T Switch_SwitchCond_ZC_h ; real_T
Switch_SwitchCond_ZC_o ; real_T Switch_SwitchCond_ZC_hq ; real_T
Switch_SwitchCond_ZC_b ; real_T Switch_SwitchCond_ZC_j ; real_T
Switch_SwitchCond_ZC_oi ; real_T Switch_SwitchCond_ZC_js ; real_T
Switch_SwitchCond_ZC_k ; real_T Switch_SwitchCond_ZC_p ; real_T
Switch_SwitchCond_ZC_kd ; real_T Switch_SwitchCond_ZC_f ; real_T
Switch_SwitchCond_ZC_ji ; real_T Switch_SwitchCond_ZC_d ; real_T
RLegstartsDSup_Input_ZC ; real_T DSupends_Input_ZC ; real_T
LLegstartsDSup_Input_ZC ; real_T Abs1_AbsZc_ZC ; real_T
Compare_RelopInput_ZC_h ; real_T Abs_AbsZc_ZC ; real_T
Switch_SwitchCond_ZC_bd ; real_T Switch_SwitchCond_ZC_dk ; real_T
Switch_SwitchCond_ZC_pi ; real_T Switch_SwitchCond_ZC_e ; real_T
Abs_AbsZc_ZC_f ; real_T Switch_SwitchCond_ZC_ej ; real_T
Switch_SwitchCond_ZC_du ; real_T Switch_SwitchCond_ZC_i ; real_T
Switch_SwitchCond_ZC_a ; real_T Switch_SwitchCond_ZC_n ; real_T
Abs_AbsZc_ZC_e ; real_T Switch_SwitchCond_ZC_l ; real_T
Switch_SwitchCond_ZC_nr ; real_T Switch_SwitchCond_ZC_et ; real_T
Abs_AbsZc_ZC_a ; real_T Switch_SwitchCond_ZC_fa ; real_T
Switch_SwitchCond_ZC_im ; real_T Switch_SwitchCond_ZC_c ; real_T
Abs_AbsZc_ZC_fc ; real_T Switch_SwitchCond_ZC_pt ; real_T
Switch_SwitchCond_ZC_m ; real_T Switch_SwitchCond_ZC_a5 ; real_T
Switch_SwitchCond_ZC_ny ; real_T Switch_SwitchCond_ZC_g ; real_T
Switch_SwitchCond_ZC_dq ; real_T Abs_AbsZc_ZC_h ; real_T
Switch_SwitchCond_ZC_cw ; real_T Switch_SwitchCond_ZC_hp ; real_T
Switch_SwitchCond_ZC_jk ; real_T Switch_SwitchCond_ZC_kk ; real_T
Abs_AbsZc_ZC_ee ; real_T Switch_SwitchCond_ZC_hb ; real_T Abs_AbsZc_ZC_ag ;
real_T Switch_SwitchCond_ZC_kz ; real_T Switch_SwitchCond_ZC_img ; real_T
Switch_SwitchCond_ZC_d4 ; real_T Switch_SwitchCond_ZC_kj ; real_T
Abs_AbsZc_ZC_a5 ; real_T Switch_SwitchCond_ZC_ci ; real_T
Switch_SwitchCond_ZC_m1 ; real_T Switch_SwitchCond_ZC_mp ; real_T
Switch_SwitchCond_ZC_gs ; real_T Switch_SwitchCond_ZC_av ; real_T
Abs_AbsZc_ZC_d ; real_T Switch_SwitchCond_ZC_mg ; real_T
Switch_SwitchCond_ZC_np ; real_T Switch_SwitchCond_ZC_b2 ; real_T
Abs_AbsZc_ZC_o ; real_T Switch_SwitchCond_ZC_fk ; real_T
Switch_SwitchCond_ZC_bl ; real_T Switch_SwitchCond_ZC_el ; real_T
Abs_AbsZc_ZC_c ; real_T Switch_SwitchCond_ZC_ky ; real_T
Switch_SwitchCond_ZC_gi ; real_T Switch_SwitchCond_ZC_jsd ; real_T
Switch_SwitchCond_ZC_ka ; real_T Switch_SwitchCond_ZC_db ; real_T
Switch_SwitchCond_ZC_c3 ; real_T Abs_AbsZc_ZC_fh ; real_T
Switch_SwitchCond_ZC_nu ; real_T Switch_SwitchCond_ZC_ck ; real_T
Switch_SwitchCond_ZC_le ; real_T Switch_SwitchCond_ZC_fn ; real_T
Abs_AbsZc_ZC_o2 ; real_T Switch_SwitchCond_ZC_lg ;
ZCV_StancePhase_nmm2DFullBody_o_T StancePhase_b ;
ZCV_StancePhase_nmm2DFullBody_n_T StancePhase_n ;
ZCV_StancePhase_nmm2DFullBody_hs_T StancePhase_j ;
ZCV_StancePhase_nmm2DFullBody_h_T StancePhase_k ;
ZCV_StancePhase_nmm2DFullBody_T StancePhase_a ;
ZCV_StancePhase_nmm2DFullBody_o_T StancePhase_g ;
ZCV_StancePhase_nmm2DFullBody_n_T StancePhase_l ;
ZCV_StancePhase_nmm2DFullBody_hs_T StancePhase_o ;
ZCV_StancePhase_nmm2DFullBody_h_T StancePhase_i ;
ZCV_StancePhase_nmm2DFullBody_T StancePhase ;
ZCV_GroundFrictionModel_nmm2DFullBody_T GroundFrictionModel_i ;
ZCV_GroundFrictionModel_nmm2DFullBody_T GroundFrictionModel_j ;
ZCV_GroundFrictionModel_nmm2DFullBody_T GroundFrictionModel_m ;
ZCV_GroundFrictionModel_nmm2DFullBody_T GroundFrictionModel ; }
ZCV_nmm2DFullBody_T ; typedef struct { ZCSigState Compare_RelopInput_ZCE ;
ZCSigState Compare_RelopInput_ZCE_h ; ZCSigState Compare_RelopInput_ZCE_c ;
ZCSigState Compare_RelopInput_ZCE_cu ; ZCSigState Switch_SwitchCond_ZCE ;
ZCSigState Switch_SwitchCond_ZCE_f ; ZCSigState Switch_SwitchCond_ZCE_a ;
ZCSigState Switch_SwitchCond_ZCE_m ; ZCSigState Switch_SwitchCond_ZCE_d ;
ZCSigState Switch_SwitchCond_ZCE_p ; ZCSigState Switch_SwitchCond_ZCE_n ;
ZCSigState Switch_SwitchCond_ZCE_l ; ZCSigState Switch_SwitchCond_ZCE_ah ;
ZCSigState Switch_SwitchCond_ZCE_o ; ZCSigState Switch_SwitchCond_ZCE_lv ;
ZCSigState Switch_SwitchCond_ZCE_j ; ZCSigState Switch_SwitchCond_ZCE_e ;
ZCSigState Switch_SwitchCond_ZCE_oj ; ZCSigState RLegstartsDSup_Input_ZCE ;
ZCSigState DSupends_Input_ZCE ; ZCSigState LLegstartsDSup_Input_ZCE ;
ZCSigState Abs1_AbsZc_ZCE ; ZCSigState Compare_RelopInput_ZCE_m ; ZCSigState
Abs_AbsZc_ZCE ; ZCSigState Switch_SwitchCond_ZCE_jw ; ZCSigState
Switch_SwitchCond_ZCE_mf ; ZCSigState Switch_SwitchCond_ZCE_m5 ; ZCSigState
Switch_SwitchCond_ZCE_k ; ZCSigState Abs_AbsZc_ZCE_a ; ZCSigState
Switch_SwitchCond_ZCE_oa ; ZCSigState Switch_SwitchCond_ZCE_oq ; ZCSigState
Switch_SwitchCond_ZCE_c ; ZCSigState Switch_SwitchCond_ZCE_aj ; ZCSigState
Switch_SwitchCond_ZCE_mq ; ZCSigState Abs_AbsZc_ZCE_d ; ZCSigState
Switch_SwitchCond_ZCE_an ; ZCSigState Switch_SwitchCond_ZCE_jz ; ZCSigState
Switch_SwitchCond_ZCE_ay ; ZCSigState Abs_AbsZc_ZCE_m ; ZCSigState
Switch_SwitchCond_ZCE_pw ; ZCSigState Switch_SwitchCond_ZCE_jze ; ZCSigState
Switch_SwitchCond_ZCE_cn ; ZCSigState Abs_AbsZc_ZCE_o ; ZCSigState
Switch_SwitchCond_ZCE_mk ; ZCSigState Switch_SwitchCond_ZCE_i ; ZCSigState
Switch_SwitchCond_ZCE_n2 ; ZCSigState Switch_SwitchCond_ZCE_ld ; ZCSigState
Switch_SwitchCond_ZCE_f0 ; ZCSigState Switch_SwitchCond_ZCE_l5 ; ZCSigState
Abs_AbsZc_ZCE_oy ; ZCSigState Switch_SwitchCond_ZCE_cd ; ZCSigState
Switch_SwitchCond_ZCE_pd ; ZCSigState Switch_SwitchCond_ZCE_me ; ZCSigState
Switch_SwitchCond_ZCE_ie ; ZCSigState Abs_AbsZc_ZCE_b ; ZCSigState
Switch_SwitchCond_ZCE_cj ; ZCSigState Abs_AbsZc_ZCE_m5 ; ZCSigState
Switch_SwitchCond_ZCE_em ; ZCSigState Switch_SwitchCond_ZCE_e5 ; ZCSigState
Switch_SwitchCond_ZCE_id ; ZCSigState Switch_SwitchCond_ZCE_jwe ; ZCSigState
Abs_AbsZc_ZCE_k ; ZCSigState Switch_SwitchCond_ZCE_k5 ; ZCSigState
Switch_SwitchCond_ZCE_j4 ; ZCSigState Switch_SwitchCond_ZCE_ev ; ZCSigState
Switch_SwitchCond_ZCE_jv ; ZCSigState Switch_SwitchCond_ZCE_je ; ZCSigState
Abs_AbsZc_ZCE_g ; ZCSigState Switch_SwitchCond_ZCE_lk ; ZCSigState
Switch_SwitchCond_ZCE_aq ; ZCSigState Switch_SwitchCond_ZCE_av ; ZCSigState
Abs_AbsZc_ZCE_p ; ZCSigState Switch_SwitchCond_ZCE_f4 ; ZCSigState
Switch_SwitchCond_ZCE_cc ; ZCSigState Switch_SwitchCond_ZCE_ny ; ZCSigState
Abs_AbsZc_ZCE_go ; ZCSigState Switch_SwitchCond_ZCE_o5 ; ZCSigState
Switch_SwitchCond_ZCE_im ; ZCSigState Switch_SwitchCond_ZCE_g ; ZCSigState
Switch_SwitchCond_ZCE_ns ; ZCSigState Switch_SwitchCond_ZCE_ks ; ZCSigState
Switch_SwitchCond_ZCE_ep ; ZCSigState Abs_AbsZc_ZCE_h ; ZCSigState
Switch_SwitchCond_ZCE_ip ; ZCSigState Switch_SwitchCond_ZCE_ap ; ZCSigState
Switch_SwitchCond_ZCE_dp ; ZCSigState Switch_SwitchCond_ZCE_f0g ; ZCSigState
Abs_AbsZc_ZCE_ki ; ZCSigState Switch_SwitchCond_ZCE_dc ;
ZCE_StancePhase_nmm2DFullBody_m_T StancePhase_b ;
ZCE_StancePhase_nmm2DFullBody_e_T StancePhase_n ;
ZCE_StancePhase_nmm2DFullBody_c_T StancePhase_j ;
ZCE_StancePhase_nmm2DFullBody_n_T StancePhase_k ;
ZCE_StancePhase_nmm2DFullBody_T StancePhase_a ;
ZCE_StancePhase_nmm2DFullBody_m_T StancePhase_g ;
ZCE_StancePhase_nmm2DFullBody_e_T StancePhase_l ;
ZCE_StancePhase_nmm2DFullBody_c_T StancePhase_o ;
ZCE_StancePhase_nmm2DFullBody_n_T StancePhase_i ;
ZCE_StancePhase_nmm2DFullBody_T StancePhase ;
ZCE_GroundFrictionModel_nmm2DFullBody_T GroundFrictionModel_i ;
ZCE_GroundFrictionModel_nmm2DFullBody_T GroundFrictionModel_j ;
ZCE_GroundFrictionModel_nmm2DFullBody_T GroundFrictionModel_m ;
ZCE_GroundFrictionModel_nmm2DFullBody_T GroundFrictionModel ; }
PrevZCX_nmm2DFullBody_T ; typedef struct { const real_T B_1_6_0 ; const
real_T B_1_11_0 ; const real_T B_0_4_0 ; }
ConstB_GroundFrictionModel_nmm2DFullBody_T ; typedef struct { const real_T
B_36_5_0 ; const real_T B_36_12_0 ; const real_T B_36_38_0 ; const real_T
B_36_45_0 ; ConstB_GroundFrictionModel_nmm2DFullBody_T GroundFrictionModel_i
; ConstB_GroundFrictionModel_nmm2DFullBody_T GroundFrictionModel_j ;
ConstB_GroundFrictionModel_nmm2DFullBody_T GroundFrictionModel_m ;
ConstB_GroundFrictionModel_nmm2DFullBody_T GroundFrictionModel ; }
ConstB_nmm2DFullBody_T ;
#define nmm2DFullBody_rtC(S) ((ConstB_nmm2DFullBody_T *) _ssGetConstBlockIO(S))
struct P_GroundFrictionModel_nmm2DFullBody_T_ { real_T P_0 ; real_T P_1 ;
real_T P_2 ; real_T P_3 ; real_T P_4 ; real_T P_5 ; real_T P_6 ; real_T P_7 ;
real_T P_8 ; real_T P_9 ; real_T P_10 ; real_T P_11 ; real_T P_12 ; real_T
P_13 ; real_T P_14 ; real_T P_15 ; real_T P_16 ; boolean_T P_17 ; boolean_T
P_18 ; boolean_T P_19 ; boolean_T P_20 ; boolean_T P_21 ; boolean_T P_22 ;
boolean_T P_23 [ 16 ] ; char_T pad_P_23 [ 2 ] ; } ; struct
P_LeftForcePlate_nmm2DFullBody_T_ { real_T P_0 ; real_T P_1 ; } ; struct
P_StancePhase_nmm2DFullBody_T_ { real_T P_0 ; real_T P_1 ; real_T P_2 ; } ;
struct P_SwingPhase_nmm2DFullBody_T_ { real_T P_0 ; real_T P_1 ; real_T P_2 ;
} ; struct P_StancePhase_nmm2DFullBody_j_T_ { real_T P_0 ; real_T P_1 ;
real_T P_2 ; real_T P_3 ; real_T P_4 ; real_T P_5 ; real_T P_6 ; real_T P_7 ;
real_T P_8 ; real_T P_9 ; real_T P_10 ; real_T P_11 ; real_T P_12 ; real_T
P_13 ; } ; struct P_StancePhase_nmm2DFullBody_d_T_ { real_T P_0 ; real_T P_1
; real_T P_2 ; real_T P_3 ; real_T P_4 ; real_T P_5 ; real_T P_6 ; real_T P_7
; real_T P_8 ; real_T P_9 ; real_T P_10 ; real_T P_11 ; real_T P_12 ; real_T
P_13 ; real_T P_14 ; real_T P_15 ; real_T P_16 ; real_T P_17 ; real_T P_18 ;
real_T P_19 ; } ; struct P_SwingPhase_nmm2DFullBody_i_T_ { real_T P_0 ;
real_T P_1 ; real_T P_2 ; real_T P_3 ; real_T P_4 ; real_T P_5 ; real_T P_6 ;
real_T P_7 ; } ; struct P_StancePhase_nmm2DFullBody_di_T_ { real_T P_0 ;
real_T P_1 ; real_T P_2 ; real_T P_3 ; real_T P_4 ; real_T P_5 ; real_T P_6 ;
} ; struct P_SwingPhase_nmm2DFullBody_p_T_ { real_T P_0 ; real_T P_1 ; real_T
P_2 ; real_T P_3 ; real_T P_4 ; } ; struct P_StancePhase_nmm2DFullBody_e_T_ {
real_T P_0 ; real_T P_1 ; real_T P_2 ; real_T P_3 ; real_T P_4 ; real_T P_5 ;
real_T P_6 ; } ; struct P_nmm2DFullBody_T_ { real_T P_0 ; real_T P_1 ; real_T
P_2 ; real_T P_3 ; real_T P_4 ; real_T P_5 ; real_T P_6 ; real_T P_7 ; real_T
P_8 ; real_T P_9 [ 2 ] ; real_T P_10 [ 344 ] ; real_T P_11 ; real_T P_12 ;
real_T P_13 ; real_T P_14 ; real_T P_15 ; real_T P_16 ; real_T P_17 ; real_T
P_18 ; real_T P_19 ; real_T P_20 ; real_T P_21 ; real_T P_22 ; real_T P_23 ;
real_T P_24 ; real_T P_25 ; real_T P_26 ; real_T P_27 ; real_T P_28 ; real_T
P_29 ; real_T P_30 ; real_T P_31 ; real_T P_32 ; real_T P_33 ; real_T P_34 ;
real_T P_35 ; real_T P_36 ; real_T P_37 ; real_T P_38 ; real_T P_39 ; real_T
P_40 ; real_T P_41 ; real_T P_42 ; real_T P_43 ; real_T P_44 ; real_T P_45 ;
real_T P_46 ; real_T P_47 ; real_T P_48 ; real_T P_49 ; real_T P_50 ; real_T
P_51 ; real_T P_52 ; real_T P_53 ; real_T P_54 ; real_T P_55 ; real_T P_56 ;
real_T P_57 ; real_T P_58 ; real_T P_59 ; real_T P_60 ; real_T P_61 ; real_T
P_62 ; real_T P_63 ; real_T P_64 ; real_T P_65 ; real_T P_66 ; real_T P_67 ;
real_T P_68 ; real_T P_69 ; real_T P_70 ; real_T P_71 ; real_T P_72 ; real_T
P_73 ; real_T P_74 ; real_T P_75 ; real_T P_76 ; real_T P_77 ; real_T P_78 ;
real_T P_79 ; real_T P_80 ; real_T P_81 ; real_T P_82 ; real_T P_83 ; real_T
P_84 ; real_T P_85 ; real_T P_86 ; real_T P_87 ; real_T P_88 ; real_T P_89 ;
real_T P_90 ; real_T P_91 ; real_T P_92 ; real_T P_93 ; real_T P_94 ; real_T
P_95 ; real_T P_96 ; real_T P_97 ; real_T P_98 ; real_T P_99 ; real_T P_100 ;
real_T P_101 ; real_T P_102 ; real_T P_103 ; real_T P_104 ; real_T P_105 ;
real_T P_106 ; real_T P_107 ; real_T P_108 ; real_T P_109 ; real_T P_110 ;
real_T P_111 ; real_T P_112 ; real_T P_113 ; real_T P_114 ; real_T P_115 ;
real_T P_116 ; real_T P_117 ; real_T P_118 ; real_T P_119 ; real_T P_120 ;
real_T P_121 ; real_T P_122 ; real_T P_123 ; real_T P_124 ; real_T P_125 ;
real_T P_126 ; real_T P_127 ; real_T P_128 ; real_T P_129 ; real_T P_130 ;
real_T P_131 ; real_T P_132 ; real_T P_133 ; real_T P_134 ; real_T P_135 ;
real_T P_136 ; real_T P_137 ; real_T P_138 ; real_T P_139 ; real_T P_140 ;
real_T P_141 ; real_T P_142 ; real_T P_143 ; real_T P_144 ; real_T P_145 ;
real_T P_146 ; real_T P_147 ; real_T P_148 ; real_T P_149 ; real_T P_150 ;
real_T P_151 ; real_T P_152 ; real_T P_153 ; real_T P_154 ; real_T P_155 ;
real_T P_156 ; real_T P_157 ; real_T P_158 ; real_T P_159 ; real_T P_160 ;
real_T P_161 ; real_T P_162 ; real_T P_163 ; real_T P_164 ; real_T P_165 ;
real_T P_166 ; real_T P_167 ; real_T P_168 ; real_T P_169 ; real_T P_170 ;
real_T P_171 ; real_T P_172 ; real_T P_173 ; real_T P_174 ; real_T P_175 ;
real_T P_176 ; real_T P_177 ; real_T P_178 ; real_T P_179 ; real_T P_180 ;
real_T P_181 ; real_T P_182 ; real_T P_183 ; real_T P_184 ; real_T P_185 ;
real_T P_186 ; real_T P_187 ; real_T P_188 ; real_T P_189 ; real_T P_190 ;
real_T P_191 ; real_T P_192 ; real_T P_193 ; real_T P_194 ; real_T P_195 ;
real_T P_196 ; real_T P_197 ; real_T P_198 ; real_T P_199 ; real_T P_200 ;
real_T P_201 ; real_T P_202 ; real_T P_203 ; real_T P_204 ; real_T P_205 ;
real_T P_206 ; real_T P_207 ; real_T P_208 ; real_T P_209 ; real_T P_210 ;
real_T P_211 ; real_T P_212 ; real_T P_213 ; real_T P_214 ; real_T P_215 ;
real_T P_216 ; real_T P_217 ; real_T P_218 ; real_T P_219 ; real_T P_220 ;
real_T P_221 ; real_T P_222 ; real_T P_223 ; real_T P_224 ; real_T P_225 ;
real_T P_226 ; real_T P_227 ; real_T P_228 ; real_T P_229 ; real_T P_230 ;
real_T P_231 ; real_T P_232 ; real_T P_233 ; real_T P_234 ; real_T P_235 ;
real_T P_236 ; real_T P_237 ; real_T P_238 ; real_T P_239 ; real_T P_240 ;
real_T P_241 ; real_T P_242 ; real_T P_243 ; real_T P_244 ; real_T P_245 ;
real_T P_246 ; real_T P_247 ; real_T P_248 ; real_T P_249 ; real_T P_250 ;
real_T P_251 ; real_T P_252 ; real_T P_253 ; real_T P_254 ; real_T P_255 ;
real_T P_256 ; real_T P_257 ; real_T P_258 ; real_T P_259 ; real_T P_260 ;
real_T P_261 ; real_T P_262 ; real_T P_263 ; real_T P_264 ; real_T P_265 ;
real_T P_266 ; real_T P_267 ; real_T P_268 ; real_T P_269 ; real_T P_270 ;
real_T P_271 [ 3 ] ; real_T P_272 ; real_T P_273 ; real_T P_274 ; real_T
P_275 ; real_T P_276 ; real_T P_277 ; real_T P_278 ; real_T P_279 ; real_T
P_280 ; real_T P_281 ; real_T P_282 ; real_T P_283 ; real_T P_284 ; real_T
P_285 ; real_T P_286 ; real_T P_287 [ 16 ] ; real_T P_288 ; real_T P_289 ;
real_T P_290 ; real_T P_291 ; real_T P_292 ; real_T P_293 ; real_T P_294 ;
real_T P_295 ; real_T P_296 ; real_T P_297 ; real_T P_298 ; real_T P_299 ;
real_T P_300 ; real_T P_301 ; real_T P_302 ; real_T P_303 ; real_T P_304 ;
real_T P_305 ; real_T P_306 ; real_T P_307 ; real_T P_308 ; real_T P_309 ;
real_T P_310 ; real_T P_311 ; real_T P_312 ; real_T P_313 ; real_T P_314 ;
real_T P_315 ; real_T P_316 ; real_T P_317 ; real_T P_318 ; real_T P_319 ;
real_T P_320 ; real_T P_321 [ 16 ] ; real_T P_322 ; real_T P_323 ; real_T
P_324 ; real_T P_325 ; real_T P_326 ; real_T P_327 ; real_T P_328 ; real_T
P_329 ; real_T P_330 ; real_T P_331 ; real_T P_332 ; real_T P_333 ; real_T
P_334 ; real_T P_335 ; real_T P_336 ; real_T P_337 ; real_T P_338 ; real_T
P_339 ; real_T P_340 ; real_T P_341 ; real_T P_342 ; real_T P_343 ; real_T
P_344 ; real_T P_345 ; real_T P_346 ; real_T P_347 ; real_T P_348 ; real_T
P_349 ; real_T P_350 ; real_T P_351 ; real_T P_352 ; real_T P_353 ; real_T
P_354 ; real_T P_355 ; real_T P_356 ; real_T P_357 ; real_T P_358 ; real_T
P_359 ; real_T P_360 ; real_T P_361 ; real_T P_362 ; real_T P_363 ; real_T
P_364 ; real_T P_365 ; real_T P_366 ; real_T P_367 ; real_T P_368 ; real_T
P_369 ; real_T P_370 ; real_T P_371 ; real_T P_372 ; real_T P_373 ; real_T
P_374 ; real_T P_375 ; real_T P_376 ; real_T P_377 ; real_T P_378 ; real_T
P_379 ; real_T P_380 ; real_T P_381 ; real_T P_382 ; real_T P_383 ; real_T
P_384 ; real_T P_385 ; real_T P_386 ; real_T P_387 ; real_T P_388 ; real_T
P_389 ; real_T P_390 ; real_T P_391 ; real_T P_392 ; real_T P_393 ; real_T
P_394 ; real_T P_395 ; real_T P_396 ; real_T P_397 ; real_T P_398 ; real_T
P_399 ; real_T P_400 ; real_T P_401 ; real_T P_402 ; real_T P_403 ; real_T
P_404 ; real_T P_405 ; real_T P_406 ; real_T P_407 ; real_T P_408 ; real_T
P_409 ; real_T P_410 ; real_T P_411 ; real_T P_412 ; real_T P_413 ; real_T
P_414 ; real_T P_415 ; real_T P_416 ; real_T P_417 ; real_T P_418 ; real_T
P_419 ; real_T P_420 ; real_T P_421 ; real_T P_422 ; real_T P_423 ; real_T
P_424 ; real_T P_425 ; real_T P_426 ; real_T P_427 ; real_T P_428 ; real_T
P_429 ; real_T P_430 ; real_T P_431 ; real_T P_432 ; real_T P_433 ; real_T
P_434 ; real_T P_435 ; real_T P_436 ; real_T P_437 ; real_T P_438 ; real_T
P_439 ; real_T P_440 ; real_T P_441 ; real_T P_442 ; real_T P_443 ; real_T
P_444 ; real_T P_445 ; real_T P_446 ; real_T P_447 ; real_T P_448 ; real_T
P_449 ; real_T P_450 ; real_T P_451 ; real_T P_452 ; real_T P_453 ; real_T
P_454 ; real_T P_455 ; real_T P_456 ; real_T P_457 ; real_T P_458 ; real_T
P_459 ; real_T P_460 ; real_T P_461 ; real_T P_462 ; real_T P_463 ; real_T
P_464 ; real_T P_465 ; real_T P_466 ; real_T P_467 ; real_T P_468 ; real_T
P_469 ; real_T P_470 ; real_T P_471 ; real_T P_472 ; real_T P_473 ; real_T
P_474 ; real_T P_475 ; real_T P_476 ; real_T P_477 ; real_T P_478 ; real_T
P_479 ; real_T P_480 ; real_T P_481 ; real_T P_482 ; real_T P_483 ; real_T
P_484 ; real_T P_485 ; real_T P_486 ; real_T P_487 ; real_T P_488 ; real_T
P_489 ; real_T P_490 ; real_T P_491 ; real_T P_492 ; real_T P_493 ; real_T
P_494 ; real_T P_495 ; real_T P_496 ; real_T P_497 ; real_T P_498 ; real_T
P_499 ; real_T P_500 ; real_T P_501 ; real_T P_502 ; real_T P_503 ; real_T
P_504 ; real_T P_505 ; real_T P_506 ; real_T P_507 ; real_T P_508 ; real_T
P_509 ; real_T P_510 ; real_T P_511 ; real_T P_512 ; real_T P_513 ; real_T
P_514 ; real_T P_515 ; real_T P_516 ; real_T P_517 ; real_T P_518 ; real_T
P_519 ; real_T P_520 ; real_T P_521 ; real_T P_522 ; real_T P_523 ; real_T
P_524 ; real_T P_525 ; real_T P_526 ; real_T P_527 ; real_T P_528 ; real_T
P_529 ; real_T P_530 ; real_T P_531 ; real_T P_532 ; real_T P_533 ; real_T
P_534 ; real_T P_535 ; real_T P_536 ; real_T P_537 ; real_T P_538 ; real_T
P_539 ; real_T P_540 ; real_T P_541 ; real_T P_542 ; real_T P_543 ; real_T
P_544 ; real_T P_545 ; real_T P_546 ; real_T P_547 ; real_T P_548 ; real_T
P_549 ; real_T P_550 ; real_T P_551 ; real_T P_552 ; real_T P_553 ; real_T
P_554 ; real_T P_555 ; real_T P_556 ; real_T P_557 ; real_T P_558 ; real_T
P_559 ; real_T P_560 ; real_T P_561 ; real_T P_562 ; real_T P_563 ; real_T
P_564 ; real_T P_565 ; real_T P_566 ; real_T P_567 ; real_T P_568 ; real_T
P_569 ; real_T P_570 ; real_T P_571 ; real_T P_572 ; real_T P_573 ; real_T
P_574 ; real_T P_575 ; real_T P_576 ; real_T P_577 ; real_T P_578 ; real_T
P_579 ; real_T P_580 ; real_T P_581 ; real_T P_582 ; real_T P_583 ; real_T
P_584 ; real_T P_585 ; real_T P_586 ; real_T P_587 ; real_T P_588 ; real_T
P_589 ; real_T P_590 ; real_T P_591 ; real_T P_592 ; real_T P_593 ; real_T
P_594 ; real_T P_595 ; real_T P_596 ; real_T P_597 ; real_T P_598 ; real_T
P_599 ; real_T P_600 ; real_T P_601 ; real_T P_602 ; real_T P_603 ; real_T
P_604 ; real_T P_605 ; real_T P_606 ; real_T P_607 ; real_T P_608 ; real_T
P_609 ; real_T P_610 ; real_T P_611 ; real_T P_612 ; real_T P_613 ; real_T
P_614 ; real_T P_615 ; real_T P_616 ; real_T P_617 ; real_T P_618 ; real_T
P_619 ; real_T P_620 ; real_T P_621 ; real_T P_622 ; real_T P_623 ; real_T
P_624 ; real_T P_625 ; real_T P_626 ; real_T P_627 ; real_T P_628 ; real_T
P_629 ; real_T P_630 ; real_T P_631 ; real_T P_632 ; real_T P_633 ; real_T
P_634 ; real_T P_635 ; real_T P_636 ; real_T P_637 ; real_T P_638 ; real_T
P_639 ; real_T P_640 ; real_T P_641 ; real_T P_642 ; real_T P_643 ; real_T
P_644 ; real_T P_645 ; real_T P_646 ; real_T P_647 ; real_T P_648 ; real_T
P_649 ; real_T P_650 ; real_T P_651 ; real_T P_652 ; real_T P_653 ; real_T
P_654 ; real_T P_655 ; real_T P_656 ; real_T P_657 ; real_T P_658 ; real_T
P_659 ; real_T P_660 ; real_T P_661 ; real_T P_662 ; real_T P_663 ; real_T
P_664 ; real_T P_665 ; real_T P_666 ; real_T P_667 ; real_T P_668 ; real_T
P_669 ; real_T P_670 ; real_T P_671 ; real_T P_672 ; real_T P_673 ; real_T
P_674 ; real_T P_675 ; real_T P_676 ; real_T P_677 ; real_T P_678 ; real_T
P_679 ; real_T P_680 ; real_T P_681 ; real_T P_682 ; real_T P_683 ; real_T
P_684 ; real_T P_685 ; real_T P_686 ; real_T P_687 ; real_T P_688 ; real_T
P_689 ; real_T P_690 ; real_T P_691 ; real_T P_692 ; real_T P_693 ; real_T
P_694 ; real_T P_695 ; real_T P_696 ; real_T P_697 ; real_T P_698 ; real_T
P_699 ; real_T P_700 ; real_T P_701 ; real_T P_702 ; real_T P_703 ; real_T
P_704 ; real_T P_705 ; real_T P_706 ; real_T P_707 ; real_T P_708 ; real_T
P_709 ; real_T P_710 ; real_T P_711 ; real_T P_712 ; real_T P_713 ; real_T
P_714 ; real_T P_715 ; real_T P_716 ; real_T P_717 ; real_T P_718 ; real_T
P_719 ; real_T P_720 ; real_T P_721 ; real_T P_722 ; real_T P_723 ; real_T
P_724 ; real_T P_725 ; real_T P_726 ; real_T P_727 ; real_T P_728 ; real_T
P_729 ; real_T P_730 ; real_T P_731 ; real_T P_732 ; real_T P_733 ; real_T
P_734 ; real_T P_735 ; real_T P_736 ; real_T P_737 ; real_T P_738 ; real_T
P_739 ; real_T P_740 ; real_T P_741 ; real_T P_742 ; real_T P_743 ; real_T
P_744 ; real_T P_745 ; real_T P_746 ; real_T P_747 ; real_T P_748 ; real_T
P_749 ; real_T P_750 ; real_T P_751 ; real_T P_752 ; real_T P_753 ; real_T
P_754 ; real_T P_755 ; real_T P_756 ; real_T P_757 ; real_T P_758 ; real_T
P_759 ; real_T P_760 ; real_T P_761 ; real_T P_762 ; real_T P_763 ; real_T
P_764 ; real_T P_765 ; real_T P_766 ; real_T P_767 ; real_T P_768 ; real_T
P_769 ; real_T P_770 ; real_T P_771 ; real_T P_772 ; real_T P_773 ; real_T
P_774 ; real_T P_775 ; real_T P_776 ; real_T P_777 ; real_T P_778 ; real_T
P_779 ; real_T P_780 ; real_T P_781 ; real_T P_782 ; real_T P_783 ; real_T
P_784 ; real_T P_785 ; real_T P_786 ; real_T P_787 ; real_T P_788 ; real_T
P_789 ; real_T P_790 ; real_T P_791 ; real_T P_792 ; real_T P_793 ; real_T
P_794 ; real_T P_795 ; real_T P_796 ; real_T P_797 ; real_T P_798 ; real_T
P_799 ; real_T P_800 ; real_T P_801 ; real_T P_802 ; real_T P_803 ; real_T
P_804 ; real_T P_805 ; real_T P_806 ; real_T P_807 ; real_T P_808 ; real_T
P_809 ; real_T P_810 ; real_T P_811 ; real_T P_812 ; real_T P_813 ; real_T
P_814 ; real_T P_815 ; real_T P_816 ; real_T P_817 ; real_T P_818 ; real_T
P_819 ; real_T P_820 ; real_T P_821 ; real_T P_822 ; real_T P_823 ; real_T
P_824 ; real_T P_825 ; real_T P_826 ; real_T P_827 ; real_T P_828 ; uint8_T
P_829 ; uint8_T P_830 ; uint8_T P_831 ; uint8_T P_832 ; char_T pad_P_832 [ 4
] ; P_StancePhase_nmm2DFullBody_e_T StancePhase_b ;
P_SwingPhase_nmm2DFullBody_p_T SwingPhase_i ;
P_StancePhase_nmm2DFullBody_di_T StancePhase_n ;
P_SwingPhase_nmm2DFullBody_i_T SwingPhase_m ; P_StancePhase_nmm2DFullBody_d_T
StancePhase_j ; P_StancePhase_nmm2DFullBody_j_T StancePhase_k ;
P_SwingPhase_nmm2DFullBody_T SwingPhase_j ; P_StancePhase_nmm2DFullBody_T
StancePhase_a ; P_StancePhase_nmm2DFullBody_e_T StancePhase_g ;
P_SwingPhase_nmm2DFullBody_p_T SwingPhase_f ;
P_StancePhase_nmm2DFullBody_di_T StancePhase_l ;
P_SwingPhase_nmm2DFullBody_i_T SwingPhase_b ; P_StancePhase_nmm2DFullBody_d_T
StancePhase_o ; P_StancePhase_nmm2DFullBody_j_T StancePhase_i ;
P_SwingPhase_nmm2DFullBody_T SwingPhase_k ; P_StancePhase_nmm2DFullBody_T
StancePhase ; P_LeftForcePlate_nmm2DFullBody_T RightForcePlate ;
P_GroundFrictionModel_nmm2DFullBody_T GroundFrictionModel_i ;
P_GroundFrictionModel_nmm2DFullBody_T GroundFrictionModel_j ;
P_LeftForcePlate_nmm2DFullBody_T LeftForcePlate ;
P_GroundFrictionModel_nmm2DFullBody_T GroundFrictionModel_m ;
P_GroundFrictionModel_nmm2DFullBody_T GroundFrictionModel ; } ; extern
P_nmm2DFullBody_T nmm2DFullBody_rtDefaultP ; extern const
ConstB_nmm2DFullBody_T nmm2DFullBody_rtInvariant ;
#endif
