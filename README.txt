DirectX Wallhack Model Recognition
====================================

This repository contains C++ headers with Model Recognition values for many well known games. 

By hooking methods, such as DrawIndexedPrimitive which are part of the D3D interface and using the model recognition values, it is possible to disable the depth buffer for the specific models, granting the player the ability to see them through walls (wallhack). 

More information on the IDirect3DDevice9 interface can be found here on MSDN: 

	https://msdn.microsoft.com/en-us/library/windows/desktop/bb174369%28v=vs.85%29.aspx
	
For Windows games, the modification can be done in many ways, but it is usually done with an injected DLL module. 

How to use the headers
=============================

Import the specific header to your C++ project and use the values within your hooked DIP function. Here is some pseudo code: 

function Hooked_DIP(X, NumberOfVerticies, PrimitiveCount) {
	if(strideValue == player_stride && PrimitiveCount == player_primeCount && NumberOfVerticies == player_numVerts) {
		disable(depth_buffer)
	}
	
	return Original_DIP(X, NumberOfVerticies, PrimitiveCount); 
}

The code above is not complete, it will require some research to make it work. More importantly the syntax is not correct and nor does it have the correct function names. 

A good starting point to learn how to hook the D3D interface is to find Azorbix's D3D starter kit, which was widely used around 2006-2010. 

