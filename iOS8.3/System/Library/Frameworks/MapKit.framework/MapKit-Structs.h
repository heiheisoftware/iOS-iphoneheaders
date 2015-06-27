/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:56:26 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

typedef struct {
	double field1;
	double field2;
} SCD_Struct_MK0;

typedef struct {
	double latitude;
	double longitude;
} SCD_Struct_MK1;

typedef struct {
	SCD_Struct_MK1 center;
	SCD_Struct_MK1 span;
} SCD_Struct_MK2;

typedef struct {
	double field1;
	double field2;
	double field3;
} SCD_Struct_MK3;

typedef struct UIEdgeInsets {
	float top;
	float left;
	float bottom;
	float right;
} UIEdgeInsets;

typedef struct {
	float field1;
	SCD_Struct_MK1 field2;
} SCD_Struct_MK5;

typedef struct CGSize {
	float width;
	float height;
} CGSize;

typedef struct __SCPreferences* SCPreferencesRef;

typedef struct __WiFiManagerClient* WiFiManagerClientRef;

typedef struct __WiFiDeviceClient* WiFiDeviceClientRef;

typedef struct CGImage* CGImageRef;

typedef struct CGPath* CGPathRef;

typedef struct CGContext* CGContextRef;

typedef struct {
	unsigned field1;
	unsigned field2;
	unsigned field3;
} SCD_Struct_MK13;

typedef struct CGPoint {
	float x;
	float y;
} CGPoint;

typedef struct _NSZone* NSZoneRef;

typedef struct CGColor* CGColorRef;

typedef struct CGRect {
	CGPoint origin;
	CGSize size;
} CGRect;

typedef struct CGAffineTransform {
	float a;
	float b;
	float c;
	float d;
	float tx;
	float ty;
} CGAffineTransform;

typedef struct {
	int field1;
	SCD_Struct_MK1 field2;
	CGPoint field3;
	CGPoint field4;
	id field5;
	char field6;
} SCD_Struct_MK19;

typedef struct {
	int field1;
	int field2;
	int field3;
	float field4;
} SCD_Struct_MK20;

typedef struct {
	int x;
	int y;
	int z;
	float contentScaleFactor;
} SCD_Struct_MK21;

typedef struct GEOTileKey {
	unsigned z : 6;
	unsigned x : 26;
	unsigned y : 26;
	unsigned type : 6;
	unsigned pixelSize : 8;
	unsigned textScale : 8;
	unsigned provider : 8;
	unsigned expires : 1;
	unsigned reserved1 : 7;
	unsigned char reserved2[4];
} GEOTileKey;

typedef struct __IOHIDEventSystemClient* IOHIDEventSystemClientRef;

typedef struct _compressed_pair<float **, std::__1::allocator<float *> > {
	float __first_;
} compressed_pair<float **, std::__1::allocator<float *> >;

typedef struct _compressed_pair<unsigned long, std::__1::allocator<float> > {
	unsigned long __first_;
} compressed_pair<unsigned long, std::__1::allocator<float> >;

typedef struct _split_buffer<float *, std::__1::allocator<float *> > {
	float __first_;
	float __begin_;
	float __end_;
	compressed_pair<float **, std::__1::allocator<float *> > __end_cap_;
} split_buffer<float *, std::__1::allocator<float *> >;

typedef struct deque<float, std::__1::allocator<float> > {
	split_buffer<float *, std::__1::allocator<float *> > __map_;
	unsigned __start_;
	compressed_pair<unsigned long, std::__1::allocator<float> > __size_;
} deque<float, std::__1::allocator<float> >;

typedef struct __IOHIDEvent* IOHIDEventRef;

typedef struct {
	unsigned field1 : 1;
	unsigned field2 : 1;
	unsigned field3 : 1;
} SCD_Struct_MK29;

typedef struct {
	int field1;
	int field2;
	int field3;
	SCD_Struct_MK2 field4;
	9 field5;
} SCD_Struct_MK30;

typedef struct {
	CGSize field1;
	float field2;
	float field3;
	float field4;
	CGSize field5;
	float field6;
	float field7;
	float field8;
	int field9;
	float field10;
	float field11;
	float field12;
	float field13;
	float field14;
	float field15;
	float field16;
	float field17;
	float field18;
	float field19;
	float field20;
	float field21;
	float field22;
	float field23;
	float field24;
	float field25;
	char field26;
	float field27;
	float field28;
	float field29;
	char field30;
	char field31;
} SCD_Struct_MK31;
