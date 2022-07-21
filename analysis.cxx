#define analysis_cxx
#include "analysis.h"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>

void analysis::Loop()
{
//   In a ROOT session, you can do:
//      root> .L analysis.C
//      root> analysis t
//      root> t.GetEntry(12); // Fill t data members with entry number 12
//      root> t.Show();       // Show values of entry 12
//      root> t.Show(16);     // Read and show values of entry 16
//      root> t.Loop();       // Loop on all entries
//

//     This is the loop skeleton where:
//    jentry is the global entry number in the chain
//    ientry is the entry number in the current Tree
//  Note that the argument to GetEntry must be:
//    jentry for TChain::GetEntry
//    ientry for TTree::GetEntry and TBranch::GetEntry
//
//       To read only selected branches, Insert statements like:
// METHOD1:
//    fChain->SetBranchStatus("*",0);  // disable all branches
//    fChain->SetBranchStatus("branchname",1);  // activate branchname
// METHOD2: replace line
//    fChain->GetEntry(jentry);       //read all branches
//by  b_branchname->GetEntry(ientry); //read only this branch
   if (fChain == 0) return;

   Long64_t nentries = fChain->GetEntriesFast();

   Long64_t nbytes = 0, nb = 0;
   for (Long64_t jentry=0; jentry<nentries;jentry++) {
      Long64_t ientry = LoadTree(jentry);
      if (ientry < 0) break;
      nb = fChain->GetEntry(jentry);   nbytes += nb;
      
      //////////////
      if(!(Q2>1&&W>2&&Nu/10.6<0.85)) continue;
      int npip = 0, ind_pip=-1;
      //// at least one pi: 211+ ///
      for (int k = 0; k <npart; k++){
	if (pid[k]==211){
	  npip++;
	  ind_pip=k;
	}
      }
      if (npip==1){
	Float_t th = acos(Pz[ind_pip]/P[ind_pip])*TMath::RadToDeg();
	hpth->Fill(P[ind_pip],th);
	hMx->Fill(sqrt(Mx2[ind_pip]));
	///
	for(int a=0; a< 14; a++){
	  if(a*0.5 < P[ind_pip] && P[ind_pip]<= (a*0.5+0.5)){
	    for(int b=0; b< 12; b++){
	      if (b*5  <th && th <= (b*5 +5)){
		hhMx[a][b]->Fill(sqrt(Mx2[ind_pip]));		
	      }
	    }
	  } 
	}
	
	//	std::unique_ptr<TFile> myFile(TFile::Open("output.root", "RECREATE")); // archivo donde se guardaran histogramas

	
		//	hpth->Write();
		//	hMx->Write();
		//	for(int a=0; a< 14; a++){
		//	  for(int b=0; b< 12; b++){
		//    hhMx[a][b]->Write(); 
		//	  }
		//	}


	// En esta parte intent[e hacer el fit, pero me produce un error de fit data is empty. 	En la consola pude hacer los fits con ->Fit("f1","R")
		
	   TF1 *f1 = new TF1("f1", "gaus(0)");
	   TF1 *f2 = new TF1("f2", "f1  + pol2(3)");
	   //   TF1 *f3 = new TF1("f3", "f1 + f2");

    
	  //      hMx->Fit(f3, "LL", "", 0.8, 1.15); //  esto es lo que no ufnciona
    
      }

      
      
      //    if (Cut(ientry) < 0) continue;
   }
}
 
