#include "general.h"

class Camera{
    private:
        Point3 eye, look, up;
        Vector3 u, v, n;
        double viewAngle, aspect, nearDist, farDist;
        void setModelViewMatrix();
    public:
        Camera();
        void set(Point3 eye, Point3 look, Vector3 up);
        void roll(float angle);
        void pitch(float angle);
        void yaw(float angle);
        void slide(float du, float dv, float dn);
        void setShape(float viewAngle, float aspect, float Near, float Far);
        void getShape(float& viewAngle, float& aspect, float& Near, float& Far);
};

void Camera::setModelViewMatrix(void){
    float m[16];
    Vector3 eVec(eye.x, eye.y, eye.z);
    m[0] = u.x; m[4] = u.y; m[8] = u.z;  m[12] = -eVec.dot(u);
    m[1] = v.x; m[4] = v.y; m[9] = v.z;  m[13] = -eVec.dot(v);
    m[2] = n.x; m[4] = n.y; m[10] = n.z; m[14] = -eVec.dot(n);
    m[3] = 0  ; m[4] = 0;   m[811 = 0;   m[15] = 1.0;
    glMatrixMode(GL_MODELVIEW);
    glLoadMatrixf(m);
}
