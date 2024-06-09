#include <iostream>
#include <string>
using namespace std;

class Camera {
    protected:
        int resolution; 
    public:
        Camera() : resolution(12) {}
        virtual void takePictures() = 0; 
};

class OriginalCamera : public Camera {
    public:
        OriginalCamera() : Camera() {}
        void takePictures() override 
		{
            cout << "Taking pictures using the original camera app." << endl;
            cout << "Resolution: " << resolution << endl;
        }
};

class Snapchat : public Camera {
    private:
        bool useFilters;
        int filterCount;
    public:
        Snapchat(bool useFilters, int count)
            : Camera(), useFilters(useFilters), filterCount(count) {}
        void takePictures() override {
            cout << "Taking pictures using Snapchat's camera feature." << endl;
            cout << "Resolution: " << resolution << endl;
            cout << "Filters enabled: " << (useFilters ? "Yes" : "No") << ", Filter count: " << filterCount << endl;
        }
};

int main() {
    Camera* c1 = new OriginalCamera();
    Camera* c2 = new Snapchat(true, 20);
    c1->takePictures();
    c2->takePictures();
    delete c1;
    delete c2;
    return 0;
}
