//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Mon Jul 18 20:37:22 2022 by ROOT version 6.26/04
// from TTree evData/reconstructed particles
// found on file: evData_BE10.6041_BC45_skim4_005043.root
//////////////////////////////////////////////////////////
 
#ifndef analysis_h
#define analysis_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>
#include <TMath.h>

// Header file for the classes stored in the TTree if any.

class analysis {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

// Fixed size dimensions of array or collections stored in the TTree if any.

   // Declaration of leaf types
   Int_t           npart;
   Float_t         Q2;
   Float_t         W;
   Float_t         Nu;
   Float_t         Xb;
   Float_t         vxec;
   Float_t         vyec;
   Float_t         vzec;
   Float_t         vxe;
   Float_t         vye;
   Float_t         vze;
   Float_t         Pex;
   Float_t         Pey;
   Float_t         Pez;
   Float_t         event;
   Float_t         Pe;
   Float_t         Ee;
   Float_t         e_Ein;
   Float_t         e_Eout;
   Float_t         e_Epcal;
   Float_t         e_npheltcc;
   Float_t         e_nphehtcc;
   Float_t         helic;
   Float_t         e_chi2pid;
   Float_t         e_pcal_lu;
   Float_t         e_pcal_lv;
   Float_t         e_pcal_lw;
   Float_t         e_ecin_lu;
   Float_t         e_ecin_lv;
   Float_t         e_ecin_lw;
   Float_t         e_ecout_lu;
   Float_t         e_ecout_lv;
   Float_t         e_ecout_lw;
   Float_t         e_pcal_hx;
   Float_t         e_pcal_hy;
   Float_t         e_pcal_hz;
   Float_t         e_ecin_hx;
   Float_t         e_ecin_hy;
   Float_t         e_ecin_hz;
   Float_t         e_ecout_hx;
   Float_t         e_ecout_hy;
   Float_t         e_ecout_hz;
   Float_t         e_trajx_sl0;
   Float_t         e_trajx_sl1;
   Float_t         e_trajx_sl2;
   Float_t         e_trajx_sl3;
   Float_t         e_trajx_sl4;
   Float_t         e_trajx_sl5;
   Float_t         e_trajy_sl0;
   Float_t         e_trajy_sl1;
   Float_t         e_trajy_sl2;
   Float_t         e_trajy_sl3;
   Float_t         e_trajy_sl4;
   Float_t         e_trajy_sl5;
   Float_t         e_trajz_sl0;
   Float_t         e_trajz_sl1;
   Float_t         e_trajz_sl2;
   Float_t         e_trajz_sl3;
   Float_t         e_trajz_sl4;
   Float_t         e_trajz_sl5;
   Float_t         e_pathtof;
   Float_t         e_timetof;
   Float_t         e_sector_tof;
   Float_t         e_Beta;
   Float_t         STTime;
   Float_t         RFTime;
   Float_t         e_dcx_rot_0;
   Float_t         e_dcy_rot_0;
   Float_t         e_dcx_rot_1;
   Float_t         e_dcy_rot_1;
   Float_t         e_dcx_rot_2;
   Float_t         e_dcy_rot_2;
   Float_t         e_sector_ltcc;
   Float_t         e_sector_htcc;
   Float_t         e_sector_ecal;
   Float_t         revent;
   Float_t         e_dc_chi2;
   Float_t         e_ftof1ax;
   Float_t         e_ftof1ay;
   Float_t         e_ftof1az;
   Float_t         e_pcalx;
   Float_t         e_pcaly;
   Float_t         e_pcalz;
   Float_t         e_ecalx;
   Float_t         e_ecaly;
   Float_t         e_ecalz;
   Float_t         e_ltccx;
   Float_t         e_ltccy;
   Float_t         e_ltccz;
   Float_t         e_htccx;
   Float_t         e_htccy;
   Float_t         e_htccz;
   Float_t         e_ftof1bx;
   Float_t         e_ftof1by;
   Float_t         e_ftof1bz;
   Float_t         e_ftof2x;
   Float_t         e_ftof2y;
   Float_t         e_ftof2z;
   Float_t         helonline_hel;
   Float_t         helonline_helRaw;
   Float_t         helflip_hel;
   Float_t         helflip_helRaw;
   Float_t         helflip_event;
   Float_t         e_dc_status;
   Float_t         e_dc_ndf;
   UInt_t          e_FID;
   UInt_t          e_NOTFID;
   Float_t         e_sector_dc;
   Float_t         e_statPart;
   Float_t         e_DCPx;
   Float_t         e_DCPy;
   Float_t         e_DCPz;
   Float_t         y;
   Float_t         th_e;
   Float_t         phi_e;
   Float_t         helicRaw;
   Float_t         ThetaPQ[55];   //[npart]
   Float_t         PhiPQ[55];   //[npart]
   Float_t         Zh[55];   //[npart]
   Float_t         Pt2[55];   //[npart]
   Float_t         Mx2[55];   //[npart]
   Float_t         Xf[55];   //[npart]
   Float_t         T[55];   //[npart]
   Float_t         P[55];   //[npart]
   Float_t         deltaZ[55];   //[npart]
   Float_t         E[55];   //[npart]
   Float_t         Px[55];   //[npart]
   Float_t         Py[55];   //[npart]
   Float_t         Pz[55];   //[npart]
   Float_t         Ein[55];   //[npart]
   Float_t         Eout[55];   //[npart]
   Float_t         pid[55];   //[npart]
   Float_t         Beta[55];   //[npart]
   Float_t         vxh[55];   //[npart]
   Float_t         vyh[55];   //[npart]
   Float_t         vzh[55];   //[npart]
   Float_t         npheltcc[55];   //[npart]
   Float_t         nphehtcc[55];   //[npart]
   Float_t         chi2pid[55];   //[npart]
   Float_t         Epcal[55];   //[npart]
   Float_t         sector_ltcc[55];   //[npart]
   Float_t         sector_htcc[55];   //[npart]
   Float_t         sector_ecal[55];   //[npart]
   Float_t         pcal_lu[55];   //[npart]
   Float_t         pcal_lv[55];   //[npart]
   Float_t         pcal_lw[55];   //[npart]
   Float_t         ecin_lu[55];   //[npart]
   Float_t         ecin_lv[55];   //[npart]
   Float_t         ecin_lw[55];   //[npart]
   Float_t         ecout_lu[55];   //[npart]
   Float_t         ecout_lv[55];   //[npart]
   Float_t         ecout_lw[55];   //[npart]
   Float_t         sector_dc[55];   //[npart]
   Float_t         statPart[55];   //[npart]
   Float_t         DCPx[55];   //[npart]
   Float_t         DCPy[55];   //[npart]
   Float_t         DCPz[55];   //[npart]
   Float_t         trajx_sl0[55];   //[npart]
   Float_t         trajx_sl1[55];   //[npart]
   Float_t         trajx_sl2[55];   //[npart]
   Float_t         trajx_sl3[55];   //[npart]
   Float_t         trajx_sl4[55];   //[npart]
   Float_t         trajx_sl5[55];   //[npart]
   Float_t         trajy_sl0[55];   //[npart]
   Float_t         trajy_sl1[55];   //[npart]
   Float_t         trajy_sl2[55];   //[npart]
   Float_t         trajy_sl3[55];   //[npart]
   Float_t         trajy_sl4[55];   //[npart]
   Float_t         trajy_sl5[55];   //[npart]
   Float_t         trajz_sl0[55];   //[npart]
   Float_t         trajz_sl1[55];   //[npart]
   Float_t         trajz_sl2[55];   //[npart]
   Float_t         trajz_sl3[55];   //[npart]
   Float_t         trajz_sl4[55];   //[npart]
   Float_t         trajz_sl5[55];   //[npart]
   Float_t         pathtof[55];   //[npart]
   Float_t         timetof[55];   //[npart]
   Float_t         sector_tof[55];   //[npart]
   Float_t         dcx_rot_0[55];   //[npart]
   Float_t         dcy_rot_0[55];   //[npart]
   Float_t         dcx_rot_1[55];   //[npart]
   Float_t         dcy_rot_1[55];   //[npart]
   Float_t         dcx_rot_2[55];   //[npart]
   Float_t         dcy_rot_2[55];   //[npart]
   Float_t         dc_chi2[55];   //[npart]
   Float_t         ftof1ax[55];   //[npart]
   Float_t         ftof1ay[55];   //[npart]
   Float_t         ftof1az[55];   //[npart]
   Float_t         pcalx[55];   //[npart]
   Float_t         pcaly[55];   //[npart]
   Float_t         pcalz[55];   //[npart]
   Float_t         ecalx[55];   //[npart]
   Float_t         ecaly[55];   //[npart]
   Float_t         ecalz[55];   //[npart]
   Float_t         ltccx[55];   //[npart]
   Float_t         ltccy[55];   //[npart]
   Float_t         ltccz[55];   //[npart]
   Float_t         htccx[55];   //[npart]
   Float_t         htccy[55];   //[npart]
   Float_t         htccz[55];   //[npart]
   Float_t         ftof1bx[55];   //[npart]
   Float_t         ftof1by[55];   //[npart]
   Float_t         ftof1bz[55];   //[npart]
   Float_t         ftof2x[55];   //[npart]
   Float_t         ftof2y[55];   //[npart]
   Float_t         ftof2z[55];   //[npart]
   Float_t         dc_status[55];   //[npart]
   Float_t         dc_ndf[55];   //[npart]
   UInt_t          FID[55];   //[npart]
   UInt_t          NOTFID[55];   //[npart]
   Int_t           mc_npart;
   Float_t         mc_Q2;
   Float_t         mc_W;
   Float_t         mc_Nu;
   Float_t         mc_Xb;
   Float_t         mc_vxe;
   Float_t         mc_vye;
   Float_t         mc_vze;
   Float_t         mc_Pex;
   Float_t         mc_Pey;
   Float_t         mc_Pez;
   Float_t         mc_event;
   Float_t         e_mcmass;
   Float_t         mc_Pe;
   Float_t         mc_Ee;
   Float_t         mc_revent;
   Float_t         mc_y;
   Float_t         mc_th_e;
   Float_t         mc_phi_e;
   Float_t         mc_e_Beta;
   Float_t         mc_ThetaPQ[1];   //[mc_npart]
   Float_t         mc_PhiPQ[1];   //[mc_npart]
   Float_t         mc_Zh[1];   //[mc_npart]
   Float_t         mc_Pt2[1];   //[mc_npart]
   Float_t         mc_Mx2[1];   //[mc_npart]
   Float_t         mc_Xf[1];   //[mc_npart]
   Float_t         mc_T[1];   //[mc_npart]
   Float_t         mc_P[1];   //[mc_npart]
   Float_t         mc_deltaZ[1];   //[mc_npart]
   Float_t         mc_E[1];   //[mc_npart]
   Float_t         mc_Px[1];   //[mc_npart]
   Float_t         mc_Py[1];   //[mc_npart]
   Float_t         mc_Pz[1];   //[mc_npart]
   Float_t         mc_pid[1];   //[mc_npart]
   Float_t         mc_mpid[1];   //[mc_npart]
   Float_t         mc_mind[1];   //[mc_npart]
   Float_t         mc_Beta[1];   //[mc_npart]
   Float_t         mc_vxh[1];   //[mc_npart]
   Float_t         mc_vyh[1];   //[mc_npart]
   Float_t         mc_vzh[1];   //[mc_npart]
   Float_t         mcmass[1];   //[mc_npart]

   // List of branches
   TBranch        *b_npart;   //!
   TBranch        *b_Q2;   //!
   TBranch        *b_W;   //!
   TBranch        *b_Nu;   //!
   TBranch        *b_Xb;   //!
   TBranch        *b_vxec;   //!
   TBranch        *b_vyec;   //!
   TBranch        *b_vzec;   //!
   TBranch        *b_vxe;   //!
   TBranch        *b_vye;   //!
   TBranch        *b_vze;   //!
   TBranch        *b_Pex;   //!
   TBranch        *b_Pey;   //!
   TBranch        *b_Pez;   //!
   TBranch        *b_event;   //!
   TBranch        *b_Pe;   //!
   TBranch        *b_Ee;   //!
   TBranch        *b_e_Ein;   //!
   TBranch        *b_e_Eout;   //!
   TBranch        *b_e_Epcal;   //!
   TBranch        *b_e_npheltcc;   //!
   TBranch        *b_e_nphehtcc;   //!
   TBranch        *b_helic;   //!
   TBranch        *b_e_chi2pid;   //!
   TBranch        *b_e_pcal_lu;   //!
   TBranch        *b_e_pcal_lv;   //!
   TBranch        *b_e_pcal_lw;   //!
   TBranch        *b_e_ecin_lu;   //!
   TBranch        *b_e_ecin_lv;   //!
   TBranch        *b_e_ecin_lw;   //!
   TBranch        *b_e_ecout_lu;   //!
   TBranch        *b_e_ecout_lv;   //!
   TBranch        *b_e_ecout_lw;   //!
   TBranch        *b_e_pcal_hx;   //!
   TBranch        *b_e_pcal_hy;   //!
   TBranch        *b_e_pcal_hz;   //!
   TBranch        *b_e_ecin_hx;   //!
   TBranch        *b_e_ecin_hy;   //!
   TBranch        *b_e_ecin_hz;   //!
   TBranch        *b_e_ecout_hx;   //!
   TBranch        *b_e_ecout_hy;   //!
   TBranch        *b_e_ecout_hz;   //!
   TBranch        *b_e_trajx_sl0;   //!
   TBranch        *b_e_trajx_sl1;   //!
   TBranch        *b_e_trajx_sl2;   //!
   TBranch        *b_e_trajx_sl3;   //!
   TBranch        *b_e_trajx_sl4;   //!
   TBranch        *b_e_trajx_sl5;   //!
   TBranch        *b_e_trajy_sl0;   //!
   TBranch        *b_e_trajy_sl1;   //!
   TBranch        *b_e_trajy_sl2;   //!
   TBranch        *b_e_trajy_sl3;   //!
   TBranch        *b_e_trajy_sl4;   //!
   TBranch        *b_e_trajy_sl5;   //!
   TBranch        *b_e_trajz_sl0;   //!
   TBranch        *b_e_trajz_sl1;   //!
   TBranch        *b_e_trajz_sl2;   //!
   TBranch        *b_e_trajz_sl3;   //!
   TBranch        *b_e_trajz_sl4;   //!
   TBranch        *b_e_trajz_sl5;   //!
   TBranch        *b_e_pathtof;   //!
   TBranch        *b_e_timetof;   //!
   TBranch        *b_e_sector_tof;   //!
   TBranch        *b_e_Beta;   //!
   TBranch        *b_STTime;   //!
   TBranch        *b_RFTime;   //!
   TBranch        *b_e_dcx_rot_0;   //!
   TBranch        *b_e_dcy_rot_0;   //!
   TBranch        *b_e_dcx_rot_1;   //!
   TBranch        *b_e_dcy_rot_1;   //!
   TBranch        *b_e_dcx_rot_2;   //!
   TBranch        *b_e_dcy_rot_2;   //!
   TBranch        *b_e_sector_ltcc;   //!
   TBranch        *b_e_sector_htcc;   //!
   TBranch        *b_e_sector_ecal;   //!
   TBranch        *b_revent;   //!
   TBranch        *b_e_dc_chi2;   //!
   TBranch        *b_e_ftof1ax;   //!
   TBranch        *b_e_ftof1ay;   //!
   TBranch        *b_e_ftof1az;   //!
   TBranch        *b_e_pcalx;   //!
   TBranch        *b_e_pcaly;   //!
   TBranch        *b_e_pcalz;   //!
   TBranch        *b_e_ecalx;   //!
   TBranch        *b_e_ecaly;   //!
   TBranch        *b_e_ecalz;   //!
   TBranch        *b_e_ltccx;   //!
   TBranch        *b_e_ltccy;   //!
   TBranch        *b_e_ltccz;   //!
   TBranch        *b_e_htccx;   //!
   TBranch        *b_e_htccy;   //!
   TBranch        *b_e_htccz;   //!
   TBranch        *b_e_ftof1bx;   //!
   TBranch        *b_e_ftof1by;   //!
   TBranch        *b_e_ftof1bz;   //!
   TBranch        *b_e_ftof2x;   //!
   TBranch        *b_e_ftof2y;   //!
   TBranch        *b_e_ftof2z;   //!
   TBranch        *b_helonline_hel;   //!
   TBranch        *b_helonline_helRaw;   //!
   TBranch        *b_helflip_hel;   //!
   TBranch        *b_helflip_helRaw;   //!
   TBranch        *b_helflip_event;   //!
   TBranch        *b_e_dc_status;   //!
   TBranch        *b_e_dc_ndf;   //!
   TBranch        *b_e_FID;   //!
   TBranch        *b_e_NOTFID;   //!
   TBranch        *b_e_sector_dc;   //!
   TBranch        *b_e_statPart;   //!
   TBranch        *b_e_DCPx;   //!
   TBranch        *b_e_DCPy;   //!
   TBranch        *b_e_DCPz;   //!
   TBranch        *b_y;   //!
   TBranch        *b_th_e;   //!
   TBranch        *b_phi_e;   //!
   TBranch        *b_helicRaw;   //!
   TBranch        *b_ThetaPQ;   //!
   TBranch        *b_PhiPQ;   //!
   TBranch        *b_Zh;   //!
   TBranch        *b_Pt2;   //!
   TBranch        *b_Mx2;   //!
   TBranch        *b_Xf;   //!
   TBranch        *b_T;   //!
   TBranch        *b_P;   //!
   TBranch        *b_deltaZ;   //!
   TBranch        *b_E;   //!
   TBranch        *b_Px;   //!
   TBranch        *b_Py;   //!
   TBranch        *b_Pz;   //!
   TBranch        *b_Ein;   //!
   TBranch        *b_Eout;   //!
   TBranch        *b_pid;   //!
   TBranch        *b_Beta;   //!
   TBranch        *b_vxh;   //!
   TBranch        *b_vyh;   //!
   TBranch        *b_vzh;   //!
   TBranch        *b_npheltcc;   //!
   TBranch        *b_nphehtcc;   //!
   TBranch        *b_chi2pid;   //!
   TBranch        *b_Epcal;   //!
   TBranch        *b_sector_ltcc;   //!
   TBranch        *b_sector_htcc;   //!
   TBranch        *b_sector_ecal;   //!
   TBranch        *b_pcal_lu;   //!
   TBranch        *b_pcal_lv;   //!
   TBranch        *b_pcal_lw;   //!
   TBranch        *b_ecin_lu;   //!
   TBranch        *b_ecin_lv;   //!
   TBranch        *b_ecin_lw;   //!
   TBranch        *b_ecout_lu;   //!
   TBranch        *b_ecout_lv;   //!
   TBranch        *b_ecout_lw;   //!
   TBranch        *b_sector_dc;   //!
   TBranch        *b_statPart;   //!
   TBranch        *b_DCPx;   //!
   TBranch        *b_DCPy;   //!
   TBranch        *b_DCPz;   //!
   TBranch        *b_trajx_sl0;   //!
   TBranch        *b_trajx_sl1;   //!
   TBranch        *b_trajx_sl2;   //!
   TBranch        *b_trajx_sl3;   //!
   TBranch        *b_trajx_sl4;   //!
   TBranch        *b_trajx_sl5;   //!
   TBranch        *b_trajy_sl0;   //!
   TBranch        *b_trajy_sl1;   //!
   TBranch        *b_trajy_sl2;   //!
   TBranch        *b_trajy_sl3;   //!
   TBranch        *b_trajy_sl4;   //!
   TBranch        *b_trajy_sl5;   //!
   TBranch        *b_trajz_sl0;   //!
   TBranch        *b_trajz_sl1;   //!
   TBranch        *b_trajz_sl2;   //!
   TBranch        *b_trajz_sl3;   //!
   TBranch        *b_trajz_sl4;   //!
   TBranch        *b_trajz_sl5;   //!
   TBranch        *b_pathtof;   //!
   TBranch        *b_timetof;   //!
   TBranch        *b_sector_tof;   //!
   TBranch        *b_dcx_rot_0;   //!
   TBranch        *b_dcy_rot_0;   //!
   TBranch        *b_dcx_rot_1;   //!
   TBranch        *b_dcy_rot_1;   //!
   TBranch        *b_dcx_rot_2;   //!
   TBranch        *b_dcy_rot_2;   //!
   TBranch        *b_dc_chi2;   //!
   TBranch        *b_ftof1ax;   //!
   TBranch        *b_ftof1ay;   //!
   TBranch        *b_ftof1az;   //!
   TBranch        *b_pcalx;   //!
   TBranch        *b_pcaly;   //!
   TBranch        *b_pcalz;   //!
   TBranch        *b_ecalx;   //!
   TBranch        *b_ecaly;   //!
   TBranch        *b_ecalz;   //!
   TBranch        *b_ltccx;   //!
   TBranch        *b_ltccy;   //!
   TBranch        *b_ltccz;   //!
   TBranch        *b_htccx;   //!
   TBranch        *b_htccy;   //!
   TBranch        *b_htccz;   //!
   TBranch        *b_ftof1bx;   //!
   TBranch        *b_ftof1by;   //!
   TBranch        *b_ftof1bz;   //!
   TBranch        *b_ftof2x;   //!
   TBranch        *b_ftof2y;   //!
   TBranch        *b_ftof2z;   //!
   TBranch        *b_dc_status;   //!
   TBranch        *b_dc_ndf;   //!
   TBranch        *b_FID;   //!
   TBranch        *b_NOTFID;   //!
   TBranch        *b_mc_npart;   //!
   TBranch        *b_mc_Q2;   //!
   TBranch        *b_mc_W;   //!
   TBranch        *b_mc_Nu;   //!
   TBranch        *b_mc_Xb;   //!
   TBranch        *b_mc_vxe;   //!
   TBranch        *b_mc_vye;   //!
   TBranch        *b_mc_vze;   //!
   TBranch        *b_mc_Pex;   //!
   TBranch        *b_mc_Pey;   //!
   TBranch        *b_mc_Pez;   //!
   TBranch        *b_mc_event;   //!
   TBranch        *b_e_mcmass;   //!
   TBranch        *b_mc_Pe;   //!
   TBranch        *b_mc_Ee;   //!
   TBranch        *b_mc_revent;   //!
   TBranch        *b_mc_y;   //!
   TBranch        *b_mc_th_e;   //!
   TBranch        *b_mc_phi_e;   //!
   TBranch        *b_mc_e_Beta;   //!
   TBranch        *b_mc_ThetaPQ;   //!
   TBranch        *b_mc_PhiPQ;   //!
   TBranch        *b_mc_Zh;   //!
   TBranch        *b_mc_Pt2;   //!
   TBranch        *b_mc_Mx2;   //!
   TBranch        *b_mc_Xf;   //!
   TBranch        *b_mc_T;   //!
   TBranch        *b_mc_P;   //!
   TBranch        *b_mc_deltaZ;   //!
   TBranch        *b_mc_E;   //!
   TBranch        *b_mc_Px;   //!
   TBranch        *b_mc_Py;   //!
   TBranch        *b_mc_Pz;   //!
   TBranch        *b_mc_pid;   //!
   TBranch        *b_mc_mpid;   //!
   TBranch        *b_mc_mind;   //!
   TBranch        *b_mc_Beta;   //!
   TBranch        *b_mc_vxh;   //!
   TBranch        *b_mc_vyh;   //!
   TBranch        *b_mc_vzh;   //!
   TBranch        *b_mcmass;   //! 
  
   TString opt = "";
   TH2D *hpth;
   TH1D *hMx;
   TH1D *hhMx[14][12];

  
  //  TFile *outputFile; 

   analysis(TTree *tree=0, TString options = "");
   virtual ~analysis();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop();
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
  

  //// my methods ////
  virtual Int_t configHisto2(TH2D *h2, TString xtitle, TString ytitle);
  virtual Int_t configHisto(TH1D *h, TString xtitle, TString ytitle, Color_t color = kBlack);
  // virtual Int_t configHisto3(TH1D **h, TString xtitle, TString ytitle, Color_t color = kBlack);
  
  
    
  
};

#endif

#ifdef analysis_cxx

Int_t analysis::configHisto2(TH2D *h2, TString xtitle, TString ytitle){
  h2->GetXaxis()->SetTitle(xtitle);
  h2->GetYaxis()->SetTitle(ytitle);
  return 0;
}

Int_t analysis::configHisto(TH1D *h, TString xtitle, TString ytitle, Color_t color){
  h->GetXaxis()->SetTitle(xtitle);
  h->GetYaxis()->SetTitle(ytitle);
  h->SetMarkerStyle(kFullDotLarge);
  h->SetMarkerColor(color);
  h->SetLineColor(color);
  h->SetLineStyle(kDashed);
  return 0;
}


//Int_t analysis::configHisto3(TH1D **h, TString xtitle, TString ytitle, Color_t color){
// h->GetXaxis()->SetTitle(xtitle);
// h->GetYaxis()->SetTitle(ytitle);
// h->SetMarkerStyle(kFullDotLarge);
// h->SetMarkerColor(color);
// h->SetLineColor(color);
// h->SetLineStyle(kDashed);
// return 0;
//}

analysis::analysis(TTree *tree, TString options) : fChain(0) 
{
  opt = options;
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("evData_BE10.6041_BC45_skim4_005043.root");
      if (!f || !f->IsOpen()) {
         f = new TFile("evData_BE10.6041_BC45_skim4_005043.root");
      }
      f->GetObject("evData",tree);

   }
   Init(tree);
}

analysis::~analysis()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t analysis::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t analysis::LoadTree(Long64_t entry)
{
// Set the environment to read one entry
   if (!fChain) return -5;
   Long64_t centry = fChain->LoadTree(entry);
   if (centry < 0) return centry;
   if (fChain->GetTreeNumber() != fCurrent) {
      fCurrent = fChain->GetTreeNumber();
      Notify();
   }
   return centry;
}

void analysis::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

  

   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fCurrent = -1;
   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("npart", &npart, &b_npart);
   fChain->SetBranchAddress("Q2", &Q2, &b_Q2);
   fChain->SetBranchAddress("W", &W, &b_W);
   fChain->SetBranchAddress("Nu", &Nu, &b_Nu);
   fChain->SetBranchAddress("Xb", &Xb, &b_Xb);
   fChain->SetBranchAddress("vxec", &vxec, &b_vxec);
   fChain->SetBranchAddress("vyec", &vyec, &b_vyec);
   fChain->SetBranchAddress("vzec", &vzec, &b_vzec);
   fChain->SetBranchAddress("vxe", &vxe, &b_vxe);
   fChain->SetBranchAddress("vye", &vye, &b_vye);
   fChain->SetBranchAddress("vze", &vze, &b_vze);
   fChain->SetBranchAddress("Pex", &Pex, &b_Pex);
   fChain->SetBranchAddress("Pey", &Pey, &b_Pey);
   fChain->SetBranchAddress("Pez", &Pez, &b_Pez);
   fChain->SetBranchAddress("event", &event, &b_event);
   fChain->SetBranchAddress("Pe", &Pe, &b_Pe);
   fChain->SetBranchAddress("Ee", &Ee, &b_Ee);
   fChain->SetBranchAddress("e_Ein", &e_Ein, &b_e_Ein);
   fChain->SetBranchAddress("e_Eout", &e_Eout, &b_e_Eout);
   fChain->SetBranchAddress("e_Epcal", &e_Epcal, &b_e_Epcal);
   fChain->SetBranchAddress("e_npheltcc", &e_npheltcc, &b_e_npheltcc);
   fChain->SetBranchAddress("e_nphehtcc", &e_nphehtcc, &b_e_nphehtcc);
   fChain->SetBranchAddress("helic", &helic, &b_helic);
   fChain->SetBranchAddress("e_chi2pid", &e_chi2pid, &b_e_chi2pid);
   fChain->SetBranchAddress("e_pcal_lu", &e_pcal_lu, &b_e_pcal_lu);
   fChain->SetBranchAddress("e_pcal_lv", &e_pcal_lv, &b_e_pcal_lv);
   fChain->SetBranchAddress("e_pcal_lw", &e_pcal_lw, &b_e_pcal_lw);
   fChain->SetBranchAddress("e_ecin_lu", &e_ecin_lu, &b_e_ecin_lu);
   fChain->SetBranchAddress("e_ecin_lv", &e_ecin_lv, &b_e_ecin_lv);
   fChain->SetBranchAddress("e_ecin_lw", &e_ecin_lw, &b_e_ecin_lw);
   fChain->SetBranchAddress("e_ecout_lu", &e_ecout_lu, &b_e_ecout_lu);
   fChain->SetBranchAddress("e_ecout_lv", &e_ecout_lv, &b_e_ecout_lv);
   fChain->SetBranchAddress("e_ecout_lw", &e_ecout_lw, &b_e_ecout_lw);
   fChain->SetBranchAddress("e_pcal_hx", &e_pcal_hx, &b_e_pcal_hx);
   fChain->SetBranchAddress("e_pcal_hy", &e_pcal_hy, &b_e_pcal_hy);
   fChain->SetBranchAddress("e_pcal_hz", &e_pcal_hz, &b_e_pcal_hz);
   fChain->SetBranchAddress("e_ecin_hx", &e_ecin_hx, &b_e_ecin_hx);
   fChain->SetBranchAddress("e_ecin_hy", &e_ecin_hy, &b_e_ecin_hy);
   fChain->SetBranchAddress("e_ecin_hz", &e_ecin_hz, &b_e_ecin_hz);
   fChain->SetBranchAddress("e_ecout_hx", &e_ecout_hx, &b_e_ecout_hx);
   fChain->SetBranchAddress("e_ecout_hy", &e_ecout_hy, &b_e_ecout_hy);
   fChain->SetBranchAddress("e_ecout_hz", &e_ecout_hz, &b_e_ecout_hz);
   fChain->SetBranchAddress("e_trajx_sl0", &e_trajx_sl0, &b_e_trajx_sl0);
   fChain->SetBranchAddress("e_trajx_sl1", &e_trajx_sl1, &b_e_trajx_sl1);
   fChain->SetBranchAddress("e_trajx_sl2", &e_trajx_sl2, &b_e_trajx_sl2);
   fChain->SetBranchAddress("e_trajx_sl3", &e_trajx_sl3, &b_e_trajx_sl3);
   fChain->SetBranchAddress("e_trajx_sl4", &e_trajx_sl4, &b_e_trajx_sl4);
   fChain->SetBranchAddress("e_trajx_sl5", &e_trajx_sl5, &b_e_trajx_sl5);
   fChain->SetBranchAddress("e_trajy_sl0", &e_trajy_sl0, &b_e_trajy_sl0);
   fChain->SetBranchAddress("e_trajy_sl1", &e_trajy_sl1, &b_e_trajy_sl1);
   fChain->SetBranchAddress("e_trajy_sl2", &e_trajy_sl2, &b_e_trajy_sl2);
   fChain->SetBranchAddress("e_trajy_sl3", &e_trajy_sl3, &b_e_trajy_sl3);
   fChain->SetBranchAddress("e_trajy_sl4", &e_trajy_sl4, &b_e_trajy_sl4);
   fChain->SetBranchAddress("e_trajy_sl5", &e_trajy_sl5, &b_e_trajy_sl5);
   fChain->SetBranchAddress("e_trajz_sl0", &e_trajz_sl0, &b_e_trajz_sl0);
   fChain->SetBranchAddress("e_trajz_sl1", &e_trajz_sl1, &b_e_trajz_sl1);
   fChain->SetBranchAddress("e_trajz_sl2", &e_trajz_sl2, &b_e_trajz_sl2);
   fChain->SetBranchAddress("e_trajz_sl3", &e_trajz_sl3, &b_e_trajz_sl3);
   fChain->SetBranchAddress("e_trajz_sl4", &e_trajz_sl4, &b_e_trajz_sl4);
   fChain->SetBranchAddress("e_trajz_sl5", &e_trajz_sl5, &b_e_trajz_sl5);
   fChain->SetBranchAddress("e_pathtof", &e_pathtof, &b_e_pathtof);
   fChain->SetBranchAddress("e_timetof", &e_timetof, &b_e_timetof);
   fChain->SetBranchAddress("e_sector_tof", &e_sector_tof, &b_e_sector_tof);
   fChain->SetBranchAddress("e_Beta", &e_Beta, &b_e_Beta);
   fChain->SetBranchAddress("STTime", &STTime, &b_STTime);
   fChain->SetBranchAddress("RFTime", &RFTime, &b_RFTime);
   fChain->SetBranchAddress("e_dcx_rot_0", &e_dcx_rot_0, &b_e_dcx_rot_0);
   fChain->SetBranchAddress("e_dcy_rot_0", &e_dcy_rot_0, &b_e_dcy_rot_0);
   fChain->SetBranchAddress("e_dcx_rot_1", &e_dcx_rot_1, &b_e_dcx_rot_1);
   fChain->SetBranchAddress("e_dcy_rot_1", &e_dcy_rot_1, &b_e_dcy_rot_1);
   fChain->SetBranchAddress("e_dcx_rot_2", &e_dcx_rot_2, &b_e_dcx_rot_2);
   fChain->SetBranchAddress("e_dcy_rot_2", &e_dcy_rot_2, &b_e_dcy_rot_2);
   fChain->SetBranchAddress("e_sector_ltcc", &e_sector_ltcc, &b_e_sector_ltcc);
   fChain->SetBranchAddress("e_sector_htcc", &e_sector_htcc, &b_e_sector_htcc);
   fChain->SetBranchAddress("e_sector_ecal", &e_sector_ecal, &b_e_sector_ecal);
   fChain->SetBranchAddress("revent", &revent, &b_revent);
   fChain->SetBranchAddress("e_dc_chi2", &e_dc_chi2, &b_e_dc_chi2);
   fChain->SetBranchAddress("e_ftof1ax", &e_ftof1ax, &b_e_ftof1ax);
   fChain->SetBranchAddress("e_ftof1ay", &e_ftof1ay, &b_e_ftof1ay);
   fChain->SetBranchAddress("e_ftof1az", &e_ftof1az, &b_e_ftof1az);
   fChain->SetBranchAddress("e_pcalx", &e_pcalx, &b_e_pcalx);
   fChain->SetBranchAddress("e_pcaly", &e_pcaly, &b_e_pcaly);
   fChain->SetBranchAddress("e_pcalz", &e_pcalz, &b_e_pcalz);
   fChain->SetBranchAddress("e_ecalx", &e_ecalx, &b_e_ecalx);
   fChain->SetBranchAddress("e_ecaly", &e_ecaly, &b_e_ecaly);
   fChain->SetBranchAddress("e_ecalz", &e_ecalz, &b_e_ecalz);
   fChain->SetBranchAddress("e_ltccx", &e_ltccx, &b_e_ltccx);
   fChain->SetBranchAddress("e_ltccy", &e_ltccy, &b_e_ltccy);
   fChain->SetBranchAddress("e_ltccz", &e_ltccz, &b_e_ltccz);
   fChain->SetBranchAddress("e_htccx", &e_htccx, &b_e_htccx);
   fChain->SetBranchAddress("e_htccy", &e_htccy, &b_e_htccy);
   fChain->SetBranchAddress("e_htccz", &e_htccz, &b_e_htccz);
   fChain->SetBranchAddress("e_ftof1bx", &e_ftof1bx, &b_e_ftof1bx);
   fChain->SetBranchAddress("e_ftof1by", &e_ftof1by, &b_e_ftof1by);
   fChain->SetBranchAddress("e_ftof1bz", &e_ftof1bz, &b_e_ftof1bz);
   fChain->SetBranchAddress("e_ftof2x", &e_ftof2x, &b_e_ftof2x);
   fChain->SetBranchAddress("e_ftof2y", &e_ftof2y, &b_e_ftof2y);
   fChain->SetBranchAddress("e_ftof2z", &e_ftof2z, &b_e_ftof2z);
   fChain->SetBranchAddress("helonline_hel", &helonline_hel, &b_helonline_hel);
   fChain->SetBranchAddress("helonline_helRaw", &helonline_helRaw, &b_helonline_helRaw);
   fChain->SetBranchAddress("helflip_hel", &helflip_hel, &b_helflip_hel);
   fChain->SetBranchAddress("helflip_helRaw", &helflip_helRaw, &b_helflip_helRaw);
   fChain->SetBranchAddress("helflip_event", &helflip_event, &b_helflip_event);
   fChain->SetBranchAddress("e_dc_status", &e_dc_status, &b_e_dc_status);
   fChain->SetBranchAddress("e_dc_ndf", &e_dc_ndf, &b_e_dc_ndf);
   fChain->SetBranchAddress("e_FID", &e_FID, &b_e_FID);
   fChain->SetBranchAddress("e_NOTFID", &e_NOTFID, &b_e_NOTFID);
   fChain->SetBranchAddress("e_sector_dc", &e_sector_dc, &b_e_sector_dc);
   fChain->SetBranchAddress("e_statPart", &e_statPart, &b_e_statPart);
   fChain->SetBranchAddress("e_DCPx", &e_DCPx, &b_e_DCPx);
   fChain->SetBranchAddress("e_DCPy", &e_DCPy, &b_e_DCPy);
   fChain->SetBranchAddress("e_DCPz", &e_DCPz, &b_e_DCPz);
   fChain->SetBranchAddress("y", &y, &b_y);
   fChain->SetBranchAddress("th_e", &th_e, &b_th_e);
   fChain->SetBranchAddress("phi_e", &phi_e, &b_phi_e);
   fChain->SetBranchAddress("helicRaw", &helicRaw, &b_helicRaw);
   fChain->SetBranchAddress("ThetaPQ", ThetaPQ, &b_ThetaPQ);
   fChain->SetBranchAddress("PhiPQ", PhiPQ, &b_PhiPQ);
   fChain->SetBranchAddress("Zh", Zh, &b_Zh);
   fChain->SetBranchAddress("Pt2", Pt2, &b_Pt2);
   fChain->SetBranchAddress("Mx2", Mx2, &b_Mx2);
   fChain->SetBranchAddress("Xf", Xf, &b_Xf);
   fChain->SetBranchAddress("T", T, &b_T);
   fChain->SetBranchAddress("P", P, &b_P);
   fChain->SetBranchAddress("deltaZ", deltaZ, &b_deltaZ);
   fChain->SetBranchAddress("E", E, &b_E);
   fChain->SetBranchAddress("Px", Px, &b_Px);
   fChain->SetBranchAddress("Py", Py, &b_Py);
   fChain->SetBranchAddress("Pz", Pz, &b_Pz);
   fChain->SetBranchAddress("Ein", Ein, &b_Ein);
   fChain->SetBranchAddress("Eout", Eout, &b_Eout);
   fChain->SetBranchAddress("pid", pid, &b_pid);
   fChain->SetBranchAddress("Beta", Beta, &b_Beta);
   fChain->SetBranchAddress("vxh", vxh, &b_vxh);
   fChain->SetBranchAddress("vyh", vyh, &b_vyh);
   fChain->SetBranchAddress("vzh", vzh, &b_vzh);
   fChain->SetBranchAddress("npheltcc", npheltcc, &b_npheltcc);
   fChain->SetBranchAddress("nphehtcc", nphehtcc, &b_nphehtcc);
   fChain->SetBranchAddress("chi2pid", chi2pid, &b_chi2pid);
   fChain->SetBranchAddress("Epcal", Epcal, &b_Epcal);
   fChain->SetBranchAddress("sector_ltcc", sector_ltcc, &b_sector_ltcc);
   fChain->SetBranchAddress("sector_htcc", sector_htcc, &b_sector_htcc);
   fChain->SetBranchAddress("sector_ecal", sector_ecal, &b_sector_ecal);
   fChain->SetBranchAddress("pcal_lu", pcal_lu, &b_pcal_lu);
   fChain->SetBranchAddress("pcal_lv", pcal_lv, &b_pcal_lv);
   fChain->SetBranchAddress("pcal_lw", pcal_lw, &b_pcal_lw);
   fChain->SetBranchAddress("ecin_lu", ecin_lu, &b_ecin_lu);
   fChain->SetBranchAddress("ecin_lv", ecin_lv, &b_ecin_lv);
   fChain->SetBranchAddress("ecin_lw", ecin_lw, &b_ecin_lw);
   fChain->SetBranchAddress("ecout_lu", ecout_lu, &b_ecout_lu);
   fChain->SetBranchAddress("ecout_lv", ecout_lv, &b_ecout_lv);
   fChain->SetBranchAddress("ecout_lw", ecout_lw, &b_ecout_lw);
   fChain->SetBranchAddress("sector_dc", sector_dc, &b_sector_dc);
   fChain->SetBranchAddress("statPart", statPart, &b_statPart);
   fChain->SetBranchAddress("DCPx", DCPx, &b_DCPx);
   fChain->SetBranchAddress("DCPy", DCPy, &b_DCPy);
   fChain->SetBranchAddress("DCPz", DCPz, &b_DCPz);
   fChain->SetBranchAddress("trajx_sl0", trajx_sl0, &b_trajx_sl0);
   fChain->SetBranchAddress("trajx_sl1", trajx_sl1, &b_trajx_sl1);
   fChain->SetBranchAddress("trajx_sl2", trajx_sl2, &b_trajx_sl2);
   fChain->SetBranchAddress("trajx_sl3", trajx_sl3, &b_trajx_sl3);
   fChain->SetBranchAddress("trajx_sl4", trajx_sl4, &b_trajx_sl4);
   fChain->SetBranchAddress("trajx_sl5", trajx_sl5, &b_trajx_sl5);
   fChain->SetBranchAddress("trajy_sl0", trajy_sl0, &b_trajy_sl0);
   fChain->SetBranchAddress("trajy_sl1", trajy_sl1, &b_trajy_sl1);
   fChain->SetBranchAddress("trajy_sl2", trajy_sl2, &b_trajy_sl2);
   fChain->SetBranchAddress("trajy_sl3", trajy_sl3, &b_trajy_sl3);
   fChain->SetBranchAddress("trajy_sl4", trajy_sl4, &b_trajy_sl4);
   fChain->SetBranchAddress("trajy_sl5", trajy_sl5, &b_trajy_sl5);
   fChain->SetBranchAddress("trajz_sl0", trajz_sl0, &b_trajz_sl0);
   fChain->SetBranchAddress("trajz_sl1", trajz_sl1, &b_trajz_sl1);
   fChain->SetBranchAddress("trajz_sl2", trajz_sl2, &b_trajz_sl2);
   fChain->SetBranchAddress("trajz_sl3", trajz_sl3, &b_trajz_sl3);
   fChain->SetBranchAddress("trajz_sl4", trajz_sl4, &b_trajz_sl4);
   fChain->SetBranchAddress("trajz_sl5", trajz_sl5, &b_trajz_sl5);
   fChain->SetBranchAddress("pathtof", pathtof, &b_pathtof);
   fChain->SetBranchAddress("timetof", timetof, &b_timetof);
   fChain->SetBranchAddress("sector_tof", sector_tof, &b_sector_tof);
   fChain->SetBranchAddress("dcx_rot_0", dcx_rot_0, &b_dcx_rot_0);
   fChain->SetBranchAddress("dcy_rot_0", dcy_rot_0, &b_dcy_rot_0);
   fChain->SetBranchAddress("dcx_rot_1", dcx_rot_1, &b_dcx_rot_1);
   fChain->SetBranchAddress("dcy_rot_1", dcy_rot_1, &b_dcy_rot_1);
   fChain->SetBranchAddress("dcx_rot_2", dcx_rot_2, &b_dcx_rot_2);
   fChain->SetBranchAddress("dcy_rot_2", dcy_rot_2, &b_dcy_rot_2);
   fChain->SetBranchAddress("dc_chi2", dc_chi2, &b_dc_chi2);
   fChain->SetBranchAddress("ftof1ax", ftof1ax, &b_ftof1ax);
   fChain->SetBranchAddress("ftof1ay", ftof1ay, &b_ftof1ay);
   fChain->SetBranchAddress("ftof1az", ftof1az, &b_ftof1az);
   fChain->SetBranchAddress("pcalx", pcalx, &b_pcalx);
   fChain->SetBranchAddress("pcaly", pcaly, &b_pcaly);
   fChain->SetBranchAddress("pcalz", pcalz, &b_pcalz);
   fChain->SetBranchAddress("ecalx", ecalx, &b_ecalx);
   fChain->SetBranchAddress("ecaly", ecaly, &b_ecaly);
   fChain->SetBranchAddress("ecalz", ecalz, &b_ecalz);
   fChain->SetBranchAddress("ltccx", ltccx, &b_ltccx);
   fChain->SetBranchAddress("ltccy", ltccy, &b_ltccy);
   fChain->SetBranchAddress("ltccz", ltccz, &b_ltccz);
   fChain->SetBranchAddress("htccx", htccx, &b_htccx);
   fChain->SetBranchAddress("htccy", htccy, &b_htccy);
   fChain->SetBranchAddress("htccz", htccz, &b_htccz);
   fChain->SetBranchAddress("ftof1bx", ftof1bx, &b_ftof1bx);
   fChain->SetBranchAddress("ftof1by", ftof1by, &b_ftof1by);
   fChain->SetBranchAddress("ftof1bz", ftof1bz, &b_ftof1bz);
   fChain->SetBranchAddress("ftof2x", ftof2x, &b_ftof2x);
   fChain->SetBranchAddress("ftof2y", ftof2y, &b_ftof2y);
   fChain->SetBranchAddress("ftof2z", ftof2z, &b_ftof2z);
   fChain->SetBranchAddress("dc_status", dc_status, &b_dc_status);
   fChain->SetBranchAddress("dc_ndf", dc_ndf, &b_dc_ndf);
   fChain->SetBranchAddress("FID", FID, &b_FID);
   fChain->SetBranchAddress("NOTFID", NOTFID, &b_NOTFID);
   fChain->SetBranchAddress("mc_npart", &mc_npart, &b_mc_npart);
   fChain->SetBranchAddress("mc_Q2", &mc_Q2, &b_mc_Q2);
   fChain->SetBranchAddress("mc_W", &mc_W, &b_mc_W);
   fChain->SetBranchAddress("mc_Nu", &mc_Nu, &b_mc_Nu);
   fChain->SetBranchAddress("mc_Xb", &mc_Xb, &b_mc_Xb);
   fChain->SetBranchAddress("mc_vxe", &mc_vxe, &b_mc_vxe);
   fChain->SetBranchAddress("mc_vye", &mc_vye, &b_mc_vye);
   fChain->SetBranchAddress("mc_vze", &mc_vze, &b_mc_vze);
   fChain->SetBranchAddress("mc_Pex", &mc_Pex, &b_mc_Pex);
   fChain->SetBranchAddress("mc_Pey", &mc_Pey, &b_mc_Pey);
   fChain->SetBranchAddress("mc_Pez", &mc_Pez, &b_mc_Pez);
   fChain->SetBranchAddress("mc_event", &mc_event, &b_mc_event);
   fChain->SetBranchAddress("e_mcmass", &e_mcmass, &b_e_mcmass);
   fChain->SetBranchAddress("mc_Pe", &mc_Pe, &b_mc_Pe);
   fChain->SetBranchAddress("mc_Ee", &mc_Ee, &b_mc_Ee);
   fChain->SetBranchAddress("mc_revent", &mc_revent, &b_mc_revent);
   fChain->SetBranchAddress("mc_y", &mc_y, &b_mc_y);
   fChain->SetBranchAddress("mc_th_e", &mc_th_e, &b_mc_th_e);
   fChain->SetBranchAddress("mc_phi_e", &mc_phi_e, &b_mc_phi_e);
   fChain->SetBranchAddress("mc_e_Beta", &mc_e_Beta, &b_mc_e_Beta);
   fChain->SetBranchAddress("mc_ThetaPQ", &mc_ThetaPQ, &b_mc_ThetaPQ);
   fChain->SetBranchAddress("mc_PhiPQ", &mc_PhiPQ, &b_mc_PhiPQ);
   fChain->SetBranchAddress("mc_Zh", &mc_Zh, &b_mc_Zh);
   fChain->SetBranchAddress("mc_Pt2", &mc_Pt2, &b_mc_Pt2);
   fChain->SetBranchAddress("mc_Mx2", &mc_Mx2, &b_mc_Mx2);
   fChain->SetBranchAddress("mc_Xf", &mc_Xf, &b_mc_Xf);
   fChain->SetBranchAddress("mc_T", &mc_T, &b_mc_T);
   fChain->SetBranchAddress("mc_P", &mc_P, &b_mc_P);
   fChain->SetBranchAddress("mc_deltaZ", &mc_deltaZ, &b_mc_deltaZ);
   fChain->SetBranchAddress("mc_E", &mc_E, &b_mc_E);
   fChain->SetBranchAddress("mc_Px", &mc_Px, &b_mc_Px);
   fChain->SetBranchAddress("mc_Py", &mc_Py, &b_mc_Py);
   fChain->SetBranchAddress("mc_Pz", &mc_Pz, &b_mc_Pz);
   fChain->SetBranchAddress("mc_pid", &mc_pid, &b_mc_pid);
   fChain->SetBranchAddress("mc_mpid", &mc_mpid, &b_mc_mpid);
   fChain->SetBranchAddress("mc_mind", &mc_mind, &b_mc_mind);
   fChain->SetBranchAddress("mc_Beta", &mc_Beta, &b_mc_Beta);
   fChain->SetBranchAddress("mc_vxh", &mc_vxh, &b_mc_vxh);
   fChain->SetBranchAddress("mc_vyh", &mc_vyh, &b_mc_vyh);
   fChain->SetBranchAddress("mc_vzh", &mc_vzh, &b_mc_vzh);
   fChain->SetBranchAddress("mcmass", &mcmass, &b_mcmass); 

   ////////////////////
   


  
   hpth = new TH2D("hpth","momentum vs #theta_{#pi^{+}}",200,0,7,200,0,60);
   
    hMx = new TH1D(TString("hMx"),"Missing Mass",200,0,4);

    for (int a = 0; a < 14; a++){ // a es el bin de momentum, b el bin de theta
      for (int b = 0; b< 12; b++){
	hhMx[a][b] = new TH1D(TString::Format("hhMx_%dx%d",a,b), "Missing Mass", 200, 0, 4); // crea histogramas con nombre hhMx_axb 
      } 
    }
 
   configHisto2(hpth,"momentum", "theta"); 
   configHisto(hMx,"x axis title","y axis title");
  

    
   Notify();
}

Bool_t analysis::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void analysis::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t analysis::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef analysis_cxx
