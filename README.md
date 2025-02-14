# Torrent-CLI

This is a simple BitTorrent client written in C++. It provides a modular implementation of core BitTorrent functionalities, including torrent file parsing, peer management, tracker communication, file management, and peer-to-peer connections. This project is intended to demonstrate the basic principles behind a BitTorrent client and provides a foundation for building more advanced features.

## Project Structure

The project follows a modular directory structure for clear separation of concerns.

BitTorrentClient/
│
├── src/                        
│   ├── main.cpp                
│   ├── torrent/                
│   │   ├── torrent.cpp         
│   │   └── torrent.h           
│   │
│   ├── peer/                   
│   │   ├── peer.cpp            
│   │   └── peer.h              
│   │
│   ├── tracker/                
│   │   ├── tracker.cpp         
│   │   └── tracker.h           
│   │
│   ├── download_manager/       
│   │   ├── download_manager.cpp
│   │   └── download_manager.h  
│   │
│   ├── network_utils/         
│   │   ├── network_utils.cpp   
│   │   └── network_utils.h     
│   │
│   ├── piece/                 
│   │   ├── piece.cpp           
│   │   └── piece.h             
│
├── lib/                        
│   └── some_library/           
│
├── include/                    
│   ├── torrent.h               
│   ├── peer.h                  
│   └── ...
│
├── test/                        
│   ├── test_peer.cpp           
│   ├── test_tracker.cpp        
│   └── ...
│
├── resources/                  
│   ├── example.torrent         
│   └── ...
│
├── CMakeLists.txt              
├── Makefile                    
└── README.md                   

