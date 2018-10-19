#include <stdio.h>
#include "hocdec.h"
extern int nrnmpi_myid;
extern int nrn_nobanner_;

extern void _BK_gc_reg(void);
extern void _CaDynamics_reg(void);
extern void _Ca_HVA_reg(void);
extern void _Ca_LVA_reg(void);
extern void _Cabuffer_gc_reg(void);
extern void _Cav12_gc_reg(void);
extern void _Cav13_gc_reg(void);
extern void _Cav22_gc_reg(void);
extern void _Cav32_gc_reg(void);
extern void _HCN_gc_reg(void);
extern void _Ih_reg(void);
extern void _Ih_shifted_reg(void);
extern void _Im_reg(void);
extern void _Im_v2_reg(void);
extern void _K_P_reg(void);
extern void _K_T_reg(void);
extern void _Kd_reg(void);
extern void _Kir21_gc_reg(void);
extern void _Kv11_gc_reg(void);
extern void _Kv14_gc_reg(void);
extern void _Kv21_gc_reg(void);
extern void _Kv2like_reg(void);
extern void _Kv34_gc_reg(void);
extern void _Kv3_1_reg(void);
extern void _Kv42_gc_reg(void);
extern void _Kv723_gc_reg(void);
extern void _NaTa_reg(void);
extern void _NaTs_reg(void);
extern void _NaV_reg(void);
extern void _Nap_reg(void);
extern void _SK_reg(void);
extern void _SK2_gc_reg(void);
extern void _na8st_gc_reg(void);
extern void _vecevent_reg(void);

void modl_reg(){
  if (!nrn_nobanner_) if (nrnmpi_myid < 1) {
    fprintf(stderr, "Additional mechanisms from files\n");

    fprintf(stderr," ./modfiles/BK_gc.mod");
    fprintf(stderr," ./modfiles/CaDynamics.mod");
    fprintf(stderr," ./modfiles/Ca_HVA.mod");
    fprintf(stderr," ./modfiles/Ca_LVA.mod");
    fprintf(stderr," ./modfiles/Cabuffer_gc.mod");
    fprintf(stderr," ./modfiles/Cav12_gc.mod");
    fprintf(stderr," ./modfiles/Cav13_gc.mod");
    fprintf(stderr," ./modfiles/Cav22_gc.mod");
    fprintf(stderr," ./modfiles/Cav32_gc.mod");
    fprintf(stderr," ./modfiles/HCN_gc.mod");
    fprintf(stderr," ./modfiles/Ih.mod");
    fprintf(stderr," ./modfiles/Ih_shifted.mod");
    fprintf(stderr," ./modfiles/Im.mod");
    fprintf(stderr," ./modfiles/Im_v2.mod");
    fprintf(stderr," ./modfiles/K_P.mod");
    fprintf(stderr," ./modfiles/K_T.mod");
    fprintf(stderr," ./modfiles/Kd.mod");
    fprintf(stderr," ./modfiles/Kir21_gc.mod");
    fprintf(stderr," ./modfiles/Kv11_gc.mod");
    fprintf(stderr," ./modfiles/Kv14_gc.mod");
    fprintf(stderr," ./modfiles/Kv21_gc.mod");
    fprintf(stderr," ./modfiles/Kv2like.mod");
    fprintf(stderr," ./modfiles/Kv34_gc.mod");
    fprintf(stderr," ./modfiles/Kv3_1.mod");
    fprintf(stderr," ./modfiles/Kv42_gc.mod");
    fprintf(stderr," ./modfiles/Kv723_gc.mod");
    fprintf(stderr," ./modfiles/NaTa.mod");
    fprintf(stderr," ./modfiles/NaTs.mod");
    fprintf(stderr," ./modfiles/NaV.mod");
    fprintf(stderr," ./modfiles/Nap.mod");
    fprintf(stderr," ./modfiles/SK.mod");
    fprintf(stderr," ./modfiles/SK2_gc.mod");
    fprintf(stderr," ./modfiles/na8st_gc.mod");
    fprintf(stderr," ./modfiles/vecevent.mod");
    fprintf(stderr, "\n");
  }
  _BK_gc_reg();
  _CaDynamics_reg();
  _Ca_HVA_reg();
  _Ca_LVA_reg();
  _Cabuffer_gc_reg();
  _Cav12_gc_reg();
  _Cav13_gc_reg();
  _Cav22_gc_reg();
  _Cav32_gc_reg();
  _HCN_gc_reg();
  _Ih_reg();
  _Ih_shifted_reg();
  _Im_reg();
  _Im_v2_reg();
  _K_P_reg();
  _K_T_reg();
  _Kd_reg();
  _Kir21_gc_reg();
  _Kv11_gc_reg();
  _Kv14_gc_reg();
  _Kv21_gc_reg();
  _Kv2like_reg();
  _Kv34_gc_reg();
  _Kv3_1_reg();
  _Kv42_gc_reg();
  _Kv723_gc_reg();
  _NaTa_reg();
  _NaTs_reg();
  _NaV_reg();
  _Nap_reg();
  _SK_reg();
  _SK2_gc_reg();
  _na8st_gc_reg();
  _vecevent_reg();
}
