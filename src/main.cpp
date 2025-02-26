#include <iostream>
#include <string>
#include "torrent.h"
#include <stdint.h>

/*#include "peer.h"*/
/*#include "tracker.h"*/
/*#include "download_manager.h"*/

int main(int argc, char* argv[]) {
    // Check if the user provided a torrent file
    if (argc < 2) {
        std::cerr << "Usage: " << argv[0] << " <torrent_file>" << std::endl;
        return 1;
    }

    // Get the torrent file path from command line argument
    std::string torrentFile = argv[1];

    // Step 1: Initialize Torrent object from the .torrent file
    Torrent torrent(torrentFile);
    if (!torrent.isValid()) {
        std::cerr << "Invalid torrent file: " << torrentFile << std::endl;
        return 1;
    }

    std::cout << "Torrent loaded successfully!" << std::endl;
    
    /*// Step 2: Initialize the Tracker for communication*/
    /*Tracker tracker(torrent.getTrackerUrl());*/
    /*if (!tracker.getPeers()) {*/
    /*    std::cerr << "Failed to fetch peers from the tracker!" << std::endl;*/
    /*    return 1;*/
    /*}*/
    /**/
    std::cout << "Peers fetched from tracker." << std::endl;
    
//Change    
}

