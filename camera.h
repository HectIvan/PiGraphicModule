#pragma once
// #include <> F*CK

#include <xnamath.h>

class Camera
{
public:
	Camera();
	~Camera();
	void Move();

	XMVECTOR Eye;
	XMVECTOR At;
	XMVECTOR Up;
	XMMATRIX m_View = XMMatrixLookAtLH(Eye, At, Up);

private:
};