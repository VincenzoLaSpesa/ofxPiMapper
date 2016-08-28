// SelSurfaceCmd
// Provides with option to undo select surface operation.
// Created by Krisjanis Rijnieks 2015-05-14

#pragma once

#include "BaseCmd.h"
#include "BaseSurface.h"
#include "SurfaceStack.h"
#include "Gui.h"

namespace ofx {
namespace piMapper {

class ClearSurfacesCmd : public BaseUndoCmd {

	public:
		ClearSurfacesCmd();
		void exec();
		void undo();

	private:
		// Here it would make sense to have another instance of SurfaceStack
		vector<BaseSurface *> _surfaces;

};

} // namespace piMapper
} // namespace ofx

