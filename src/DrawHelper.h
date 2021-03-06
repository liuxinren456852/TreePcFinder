#pragma once

#include "Exception.h"
#include "Point3d.h"
#include "PointCloud.h"


namespace Tpc
{
	namespace Ui
	{
#ifdef _ACRXAPP
		using Tpc::Sys::Exception;
		using Tpc::Geom::Point3d;
		using Tpc::Base::PointCloud;

		class DrawHelper
		{
		private:
			DrawHelper(void);
			~DrawHelper(void);

		public:
			static AcDbObjectId addPointToDb(const Point3d&,int c =0) throw(Exception);
			static AcDbObjectId addCircleToDb(const Point3d&,float, int c =0) throw(Exception);
			static AcDbObjectId addLineToDb(const Point3d&,const Point3d&) throw(Exception);
			static void addCloudToDb(PointCloud&,int,int c =0) throw(Exception);
			static void addZCloudToDb(PointCloud&,int,int,float) throw(Exception);
		};
#endif
	}
}
