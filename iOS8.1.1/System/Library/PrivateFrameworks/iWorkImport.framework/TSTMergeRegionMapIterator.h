/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:40 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class TSTMergeRegionMap;

@interface TSTMergeRegionMapIterator : NSObject {

	TSTMergeRegionMap* mMergeRegionMap;
	hash_map_iterator<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::pair<TSUColumnRowCoordinate, TSUColumnRowSize>, void *> *> >* mMergeRegionIterator;

}
-(SCD_Struct_TS496)nextMergeRegion;
-(BOOL)hasNextMergeRegion;
-(id)initWithMergeRegionMap:(id)arg1 ;
-(void)dealloc;
-(void)reset;
@end
