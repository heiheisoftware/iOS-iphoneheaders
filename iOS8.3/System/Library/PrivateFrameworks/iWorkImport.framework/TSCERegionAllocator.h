/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 4:42:05 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@interface TSCERegionAllocator : NSObject {

	TSCERegionNode* mHead;
	TSCERegionNode* mCurBlock;
	unsigned mBlockOffset;
	NSZone* mZone;

}
-(void*)malloc:(unsigned long)arg1 ;
-(void*)calloc:(unsigned long)arg1 ;
-(void)dealloc;
-(NSZone*)zone;
-(void)reset;
-(id)initWithInitialCapacity:(unsigned long)arg1 ;
@end

