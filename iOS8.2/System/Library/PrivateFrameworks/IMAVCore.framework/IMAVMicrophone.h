/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:17 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/IMAVCore.framework/IMAVCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface IMAVMicrophone : NSObject {

	id _internalDevice;

}

@property (nonatomic,retain,readonly) NSString * name; 
@property (nonatomic,retain,readonly) NSString * uniqueID; 
-(void)dealloc;
-(id)init;
-(id)description;
-(NSString *)name;
-(id)_initWithAVAudioDevice:(id)arg1 ;
-(id)_AVAudioDevice;
-(NSString *)uniqueID;
@end

