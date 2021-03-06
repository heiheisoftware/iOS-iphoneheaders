/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:24:38 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@class NSString;

@interface PLPhotoDCFObject : NSObject {

	NSString* _name;
	int _number;

}
+(id)validDCFNameForName:(id)arg1 requiredLength:(int)arg2 nameLength:(int)arg3 number:(int*)arg4 numberRange:(NSRange)arg5 suffix:(id)arg6 ;
-(void)dealloc;
-(id)description;
-(id)name;
-(long long)compare:(id)arg1 ;
-(id)initWithName:(id)arg1 number:(int)arg2 ;
-(int)number;
-(void)setWriteIsPending:(BOOL)arg1 ;
@end

