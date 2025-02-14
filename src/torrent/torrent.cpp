#include "torrent.h"
#include <fstream>
#include <iostream>
#include <stdexcept>
#include <sstream>
#include <json/json.h>

//Constructor
Torrent::Torrent(const std::string& filePath) : filePath(filePath), totalSize(0){
  parseTorrentFile();
}

//Torrent Validation
bool Torrent::isValid() const{
  return !trackerUrl.empty() && !files.empty();
}

//Tracker URL retreiver
std::string Torrent::getTrackerUrl() const{
  return trackerUrl;
}

//Files list retreiver
std::vector<std::string> Torrent::getfiles() const{
  return files;
}

uint64_t Torrent::getTotalSize() const{
  return totalSize;
}

void Torrent::parseTorrentFile(){
  std::string content = readFile(filePath);

  try{
    //Logic to parse bencoded torrent
  }
}

std::string Torrent::readFile(const std::string& path) const{
  std::ifstream file(path);
  if(!file.is_open()){
    throw std::runtime_error("Could not open file: " + path);
  }

  std::stringstream buffer;
  buffer << file.rdbuf();
  return buffer.str();
}
