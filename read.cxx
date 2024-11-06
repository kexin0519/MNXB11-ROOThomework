#include <iostream>
#include <TFile.h>
#include <TTree.h>
#include <TCanvas.h>
#include "class1.h"

void read_tree() {
    TFile *f1 = TFile::Open("tree_file.root");
    TTree *tree = (TTree*)f1->Get("tree");
    
    class1 *obj = nullptr;
    tree->SetBranchAddress("class1_object", &obj);    //set branch address to the class1 object

    Int_t nEntries = tree->GetEntries();
    std::cout << "Processing " << nEntries << " entries." << std::endl;

    for (Int_t i = 0; i < nEntries; i++) {
        tree->GetEntry(i);    //get the current entry

        std::cout << "Entry " << i << " -- Radius: " << obj->getRadius() << std::endl;
        std::cout << "Volume of Sphere: " << obj->calculateVolume() << std::endl;
    }
    
    TCanvas *c1 = new TCanvas("c1", "TTree Draw", 800, 600);

    tree->Draw("TreeDraw");

    f1->Close();
}

