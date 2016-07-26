#pragma once
#include "stdafx.h"
#include "data_struct.h"
class LineGenerate
{
public:
    LineGenerate(void);
    ~LineGenerate(void);
public:
    static void GenerateLineFromPlane(vector<LineSegment>& linesegments,const vector<PlanSegment>& planes,const CloudPtr &Cloud);
    static void RefineLine(vector<LineSegment>& src_line,vector<LineSegment>& dst_line);
private:
    static void GetStartEndpt(LineSegment &linesegment,CloudItem startpoint,CloudItem endpoint);
};
