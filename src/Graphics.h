#ifndef GRAPHICS_H
#define GRAPHICS_H

#include <string>
#include <vector>
#include <opencv2/core.hpp>
#include "TrafficObject.h"

class Graphics
{
    public:

        void seBgFilename(std::string filename) {_bgFilename = filename;}
        void setTrafficObjects(std::vector<std::shared_ptr<TrafficObject>> &TrafficObject) {_trafficObjects = TrafficObject;}

        void simulate();

    private:
    
        void loadBackgroundImg();
        void drawTrafficObjects();

        std::vector<std::shared_ptr<TrafficObject>> _trafficObject;
        std::string _bgFilename;
        std::string _windowName;
        std::vector<cv::Mat> _images;
}

#endif