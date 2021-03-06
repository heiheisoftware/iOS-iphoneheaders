/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:56:46 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <PhotosUI/PULayoutSectionSampler.h>

@interface PULayoutSectionSimpleSampler : PULayoutSectionSampler {

	int _numberOfVisibleItems;
	int _numberOfRealItems;

}
-(int)indexForUnsampledIndex:(int)arg1 isMainItem:(BOOL*)arg2 ;
-(int)unsampledIndexForIndex:(int)arg1 ;
-(void)enumerateUnsampledIndexesForSampledIndexInRange:(NSRange)arg1 usingBlock:(/*^block*/ id)arg2 ;
-(void)dumpInternalMemory;
-(id)initWithNumberOfVisibleItems:(int)arg1 numberOfRealItems:(int)arg2 ;
@end

