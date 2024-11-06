#include <iostream>
#include <TFile.h>
#include <TTree.h>
#include "class1.h"

void write() {
    TFile *file = new TFile("tree_file.root");    //result file 

    TTree *tree = new TTree("tree", "Tree of class1");    //create TTree to store data

    double radius;    //create variable
    double volume;

    class1 sphere;

    tree->Branch("radius", &radius, "radius/D");    //set address
    tree->Branch("volume", &volume, "volume/D");

    for (int i = 0; i < 10; ++i) {    //lopp to fill the tree
        radius = i * 5.0;    //set radius
        sphere.setRadius(radius);    //set the radius in the class1 object
        
        volume = sphere.calculateVolume();    //calculated the volume with function class1

        tree->Fill();
    }

    tree->Write();

    file->Close();

    std::cout << "Data written to tree_file.root" << std::endl;
}