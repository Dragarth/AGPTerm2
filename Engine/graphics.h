////////////////////////////////////////////////////////////////////////////////
// Filename: Graphics.h
////////////////////////////////////////////////////////////////////////////////
#ifndef _Graphics_H_
#define _Graphics_H_


///////////////////////
// MY CLASS INCLUDES //
///////////////////////
#include "D3D.h"
#include "ShaderManager.h"
#include "camera.h"
#include "Light.h"
#include "Model.h"
#include "Bumpmodel.h"


/////////////
// GLOBALS //
/////////////
const bool FULL_SCREEN = true;
const bool VSYNC_ENABLED = true;
const float SCREEN_DEPTH = 1000.0f;
const float SCREEN_NEAR = 0.1f;


////////////////////////////////////////////////////////////////////////////////
// Class name: Graphics
////////////////////////////////////////////////////////////////////////////////
class Graphics
{
public:
	Graphics();
	Graphics(const Graphics&);
	~Graphics();

	bool Initialize(int, int, HWND);
	void Shutdown();
	bool Frame();

private:
	bool Render(float);

private:
	D3D* m_D3D;
	ShaderManager* m_ShaderManager;
	camera* m_Camera;
	Light* m_Light;
	Model* m_Model1;
	Model* m_Model2;
	Bumpmodel* m_Model3;
};

#endif