// These macros are defined in every sounds.hpp file for vehicles
// moved here for easier management.
#define WARP_FACTOR(val,from,to) (val factor[from,to])

#define RANGE(val,from,band0,to,band1) FACTOR2(val,from,(from+band0),to,(to+band1))

#define FACTOR2(val,from0,to0,from1,to1) (WARP_FACTOR(val,from0,to0) * WARP_FACTOR(val,to1,from1))

#define MAX_RPM 6900
#define RPM(rpm) (rpm/MAX_RPM)

// specialized FACTOR for rpm
#define FACTOR_RPM(from,to) WARP_FACTOR(RPM(rpm),RPM(from),RPM(to))
// specialized peak for rpm
#define FACTOR2_RPM(from0,to0,from1,to1) (FACTOR_RPM(from0,to0) * FACTOR_RPM(to1,from1))
// specialized peak, different definition, version for rpm
#define RANGE_RPM(from,band0,to,band1) FACTOR2_RPM(from,(from+band0),to,(to+band1))

#define HZ_IDLE FACTOR_RPM(400,1150)
#define HZ_RPM1 FACTOR_RPM(900,2100)
#define HZ_RPM2 FACTOR_RPM(1300,3100)
#define HZ_RPM3 FACTOR_RPM(2200,4100)
#define HZ_RPM4 FACTOR_RPM(3300,4900)
#define HZ_RPM5 FACTOR_RPM(4200,6200)
#define HZ_RPM6 FACTOR_RPM(5100,6900)

#define VOLUME_IDLE FACTOR2_RPM(400,700,900,1100)
#define VOLUME_RPM1 FACTOR2_RPM(870,1100,1300,2100)
#define VOLUME_RPM2 FACTOR2_RPM(1250,2050,2300,3100)
#define VOLUME_RPM3 FACTOR2_RPM(2250,3050,3300,4100)
#define VOLUME_RPM4 FACTOR2_RPM(3250,4050,4200,4870)
#define VOLUME_RPM5 FACTOR2_RPM(4150,4800,5150,6150)
#define VOLUME_RPM6 FACTOR_RPM(5100,6100)

// Simplify making magazines for flare / chaff
#define FLARECHAFF_MAGS(magType,color) class DOUBLES(ls_mag_60Rnd_CM##magType,color): ls_magazine_CM_base { \
    scope = 2; \
    ammo = QUOTE(DOUBLES(ls_ammo_CM##magType,color)); \
    count = 60; \
}; \
class DOUBLES(ls_mag_120Rnd_CM##magType,color): DOUBLES(ls_mag_60Rnd_CM##magType,color) { \
    count = 120; \
}; \
class DOUBLES(ls_mag_240Rnd_CM##magType,color): DOUBLES(ls_mag_60Rnd_CM##magType,color) { \
    count = 240; \
}; \
class DOUBLES(ls_mag_300Rnd_CM##magType,color): DOUBLES(ls_mag_60Rnd_CM##magType,color) { \
    count = 300; \
}
