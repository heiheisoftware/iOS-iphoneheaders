/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:29:35 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <WebKit/WKFormPeripheral.h>

@interface WKFormSelectControl : NSObject <WKFormPeripheral> {

	RetainPtr<id<WKFormControl> >* _control;

}
+(id)createPeripheralWithView:(id)arg1 ;
-(void)beginEditing;
-(void)endEditing;
-(id)initWithView:(id)arg1 ;
-(id)assistantView;
@end

