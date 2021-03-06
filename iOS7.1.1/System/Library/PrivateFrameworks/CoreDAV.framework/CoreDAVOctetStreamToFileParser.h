/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:04 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVOctetStreamParser.h>

@class NSFileHandle;

@interface CoreDAVOctetStreamToFileParser : CoreDAVOctetStreamParser {

	NSFileHandle* _fileHandle;

}

@property (retain) NSFileHandle * fileHandle;              //@synthesize fileHandle=_fileHandle - In the implementation block
-(void)dealloc;
-(bool)processData:(id)arg1 forTask:(id)arg2 ;
-(id)initWithFileHandle:(id)arg1 ;
-(void)setFileHandle:(id)arg1 ;
-(id)fileHandle;
@end

