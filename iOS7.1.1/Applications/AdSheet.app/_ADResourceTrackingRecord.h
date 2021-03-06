/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:58:55 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/AdSheet.app/AdSheet
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSURL;

@interface _ADResourceTrackingRecord : NSObject {

	NSURL* _URL;
	double _startTime;
	double _requestTime;
	double _responseTime;

}

@property (assign,nonatomic) double startTime;                 //@synthesize startTime=_startTime - In the implementation block
@property (assign,nonatomic) double requestTime;               //@synthesize requestTime=_requestTime - In the implementation block
@property (assign,nonatomic) double responseTime;              //@synthesize responseTime=_responseTime - In the implementation block
@property (nonatomic,retain) NSURL * URL;                      //@synthesize URL=_URL - In the implementation block
-(double)requestTime;
-(void)setRequestTime:(double)arg1 ;
-(void)dealloc;
-(void)setStartTime:(double)arg1 ;
-(id)URL;
-(void)setURL:(id)arg1 ;
-(double)startTime;
-(void)setResponseTime:(double)arg1 ;
-(double)responseTime;
@end

