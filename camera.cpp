#include "camera.h"

Camera::Camera()
{
	Eye = XMVectorSet(0.0f, 3.0f, -6.0f, 0.0f);
	At = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);
	Up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);
}

Camera::~Camera()
{
}


void Camera::Move()
{

}