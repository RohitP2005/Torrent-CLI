#ifndef TORRENT_H
#define TORRENT_H

#include <string>
#include <vector>
#include <iostream>
#include <fstream>
#include <stdexcept>

class Torrent{
public:
  // Constructor: Initializes the Torrent with the path to the .torrent file
    Torrent(const std::string& filePath);

    // Method to check if the torrent file is valid
    bool isValid() const;

    // Getter for the tracker URL from the torrent metadata
    std::string getTrackerUrl() const;

    // Getter for the list of files in the torrent
    std::vector<std::string> getFiles() const;

    // Getter for the total size of the files in the torrent
    uint64_t getTotalSize() const;

private:
    void parseTorrentFile();

    std::string trackerUrl;
    std::vector<std::string> files;
    uint64_t totalSize;

    std::string filePath;

    std::string readFile(const std::string& path) const;

};

#endif // TORRENT_H

