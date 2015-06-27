/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 11:17:48 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class PKPrinter;


@protocol UIPrinterBrowserOwner <NSObject>
@property (nonatomic,retain) PKPrinter * printer; 
@optional
-(void)setUserSelectedPrinter:(char)arg1;
-(char)shouldShowPrinter:(id)arg1;

@required
-(unsigned)supportedInterfaceOrientations;
-(char)shouldAutorotateToInterfaceOrientation:(int)arg1;
-(void)dismissAnimated:(char)arg1;
-(char)filtersPrinters;
-(void)cancelPrinting;
-(PKPrinter *)printer;
-(void)setPrinter:(id)arg1;

@end
