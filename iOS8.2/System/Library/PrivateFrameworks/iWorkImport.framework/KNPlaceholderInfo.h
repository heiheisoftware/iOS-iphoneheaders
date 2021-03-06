/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:27:20 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSWPShapeInfo.h>

@interface KNPlaceholderInfo : TSWPShapeInfo {

	char mIsFromPasteboard;

}

@property (nonatomic,readonly) char isFromPasteboard; 
+(id)newObjectForUnarchiver:(id)arg1 ;
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(char)isFromPasteboard;
-(void)saveToArchive:(PlaceholderArchive*)arg1 archiver:(id)arg2 ;
-(void)loadFromArchive:(const PlaceholderArchive*)arg1 unarchiver:(id)arg2 ;
-(Class)repClass;
-(char)autoListRecognition;
-(char)autoListTermination;
-(char)shouldHideEmptyBullets;
-(char)displaysInstructionalText;
-(id)instructionalText;
-(id)copyAsShapeInfoWithContext:(id)arg1 ;
-(int)kind;
-(Class)layoutClass;
@end

