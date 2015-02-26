/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:03:34 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/AssistiveTouch.app/assistivetouchd
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol HNDDeviceDelegate;
#import <assistivetouchd/assistivetouchd-Structs.h>
@interface HNDDevice : NSObject {

	IOHIDDeviceRef _hidDevice;
	<HNDDeviceDelegate>* _delegate;
	char* _hidReportBuffer;
	BOOL _isLoaded;
	BOOL _secondaryButton;
	BOOL _tertiaryButton;
	BOOL _wheel;
	float _minY;
	float _maxY;
	float _minX;
	float _maxX;

}

@property (nonatomic,readonly) BOOL isLoaded;                             //@synthesize isLoaded=_isLoaded - In the implementation block
@property (nonatomic,readonly) BOOL secondaryButton;                      //@synthesize secondaryButton=_secondaryButton - In the implementation block
@property (nonatomic,readonly) BOOL tertiaryButton;                       //@synthesize tertiaryButton=_tertiaryButton - In the implementation block
@property (nonatomic,readonly) BOOL wheel;                                //@synthesize wheel=_wheel - In the implementation block
@property (assign,nonatomic) <HNDDeviceDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)createNewDevice:(IOHIDDeviceRef)arg1 ;
-(BOOL)secondaryButton;
-(id)_initWithHIDDevice:(IOHIDDeviceRef)arg1 ;
-(void)handleReportCallback:(int)arg1 report:(char*)arg2 reportLength:(long)arg3 ;
-(void)handleValueCallback:(IOHIDValueRef)arg1 ;
-(BOOL)tertiaryButton;
-(BOOL)wheel;
-(void)unload;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(BOOL)isLoaded;
-(BOOL)load;
@end
