/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:57 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <CoreFoundation/NSCopying.h>

@interface TPPageIndexPath : NSObject <NSCopying> {

	unsigned long long _sectionIndex;
	unsigned long long _pageIndex;

}

@property (assign,nonatomic) unsigned long long sectionIndex;              //@synthesize sectionIndex=_sectionIndex - In the implementation block
@property (assign,nonatomic) unsigned long long pageIndex;                 //@synthesize pageIndex=_pageIndex - In the implementation block
-(id)initWithSectionIndex:(unsigned long long)arg1 pageIndex:(unsigned long long)arg2 ;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone)arg1 ;
-(unsigned long long)pageIndex;
-(void)setPageIndex:(unsigned long long)arg1 ;
-(unsigned long long)sectionIndex;
-(void)setSectionIndex:(unsigned long long)arg1 ;
@end

