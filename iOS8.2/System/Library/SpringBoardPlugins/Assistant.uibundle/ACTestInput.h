/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:21:33 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/SpringBoardPlugins/Assistant.uibundle/Assistant
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class AFUIRequestOptions;

@interface ACTestInput : NSObject {

	AFUIRequestOptions* _requestOptions;

}

@property (nonatomic,readonly) AFUIRequestOptions * requestOptions;              //@synthesize requestOptions=_requestOptions - In the implementation block
+(id)_baseRequestOptions;
-(id)initWithText:(id)arg1 ;
-(id)_initWithRequestOptions:(id)arg1 ;
-(id)initWithRecordedSpeechURL:(id)arg1 ;
-(AFUIRequestOptions *)requestOptions;
@end

