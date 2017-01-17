////////////////////////////////////////////////////////////////////////////////
// Filename: camera.h
////////////////////////////////////////////////////////////////////////////////
#ifndef _camera_H_
#define _camera_H_


//////////////
// INCLUDES //
//////////////
//#include <d3dx10math.h>
#include <DirectXMath.h> 
using namespace DirectX;

////////////////////////////////////////////////////////////////////////////////
// Class name: camera
////////////////////////////////////////////////////////////////////////////////
class camera
{
public:
	camera();
	camera(const camera&);
	~camera();

	void SetPosition(float, float, float);
	void SetRotation(float, float, float);

	//XMVECTOR  GetPosition();
	//XMVECTOR  GetRotation();
	XMFLOAT3  GetPosition();
	XMFLOAT3  GetRotation();

	void Render();
	void GetViewMatrix(XMMATRIX&);

private:
	float m_positionX, m_positionY, m_positionZ;
	float m_rotationX, m_rotationY, m_rotationZ;
	XMMATRIX  m_viewMatrix;
};

#endif