/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:10:05 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class NSMutableArray, NSString;

@interface TSTTemporaryCollectionNode : NSObject {

	TSCEVectorIndexPair mDimensions;
	NSMutableArray* mChildren;
	NSString* mWhitespaceBeforeFirstChild;
	NSMutableArray* mWhitespaceAfterDelimiters;
	unsigned mFirstIndex;
	unsigned mLastIndex;

}

@property (assign,nonatomic) TSCEVectorIndexPair dimensions; 
@property (nonatomic,retain) NSMutableArray * children; 
@property (nonatomic,retain) NSString * whitespaceBeforeFirstChild; 
@property (nonatomic,retain) NSMutableArray * whitespaceAfterDelimiters; 
@property (assign,nonatomic) unsigned firstIndex; 
@property (assign,nonatomic) unsigned lastIndex; 
-(void)setFirstIndex:(unsigned)arg1 ;
-(void)setLastIndex:(unsigned)arg1 ;
-(id)whitespaceAfterDelimiters;
-(void)setWhitespaceAfterDelimiters:(id)arg1 ;
-(void)setWhitespaceBeforeFirstChild:(id)arg1 ;
-(id)whitespaceBeforeFirstChild;
-(void)dealloc;
-(id)init;
-(unsigned)firstIndex;
-(unsigned)lastIndex;
-(id).cxx_construct;
-(TSCEVectorIndexPair)dimensions;
-(void)setDimensions:(TSCEVectorIndexPair)arg1 ;
-(void)setChildren:(id)arg1 ;
-(id)children;
@end

