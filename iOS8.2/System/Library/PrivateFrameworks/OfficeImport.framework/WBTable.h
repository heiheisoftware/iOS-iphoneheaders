/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:39 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface WBTable : NSObject
+(void)initPropertiesFrom:(id)arg1 to:(id)arg2 in:(id)arg3 ;
+(void)readRowFrom:(id)arg1 textRuns:(id)arg2 to:(id)arg3 ;
+(char)isTableFloating:(const WrdTableProperties*)arg1 tracked:(const WrdTableProperties*)arg2 ;
+(void)readFrom:(id)arg1 textRuns:(id)arg2 table:(id)arg3 ;
+(char)tryToReadRowFrom:(id)arg1 textRuns:(id)arg2 to:(id)arg3 ;
@end

