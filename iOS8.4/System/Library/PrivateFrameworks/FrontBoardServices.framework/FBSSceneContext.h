/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:22:18 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol FBSSceneContextDelegate;
@class CAContext;

@interface FBSSceneContext : NSObject {

	unsigned _identifier;
	double _level;
	CAContext* _context;
	id<FBSSceneContextDelegate> _delegate;
	BOOL _shouldObserveContext;

}

@property (nonatomic,retain,readonly) CAContext * CAContext;                    //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) unsigned identifier;                             //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) double level;                                      //@synthesize level=_level - In the implementation block
@property (assign,nonatomic) id<FBSSceneContextDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)contextWithCAContext:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<FBSSceneContextDelegate>)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id<FBSSceneContextDelegate>)delegate;
-(unsigned)identifier;
-(void)setLevel:(double)arg1 ;
-(double)level;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)initWithCAContext:(id)arg1 ;
-(id)initWithIdentifier:(unsigned)arg1 level:(double)arg2 ;
-(CAContext *)CAContext;
@end

