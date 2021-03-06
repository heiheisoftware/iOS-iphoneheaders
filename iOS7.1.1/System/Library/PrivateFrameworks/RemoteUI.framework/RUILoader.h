/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:50 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <RemoteUI/RUIHTTPRequest.h>

@class RUIParser, NSURL;

@interface RUILoader : RUIHTTPRequest {

	RUIParser* _parser;
	NSURL* _url;
	bool _allowNonSecureHTTP;

}

@property (assign,nonatomic) bool allowNonSecureHTTP;              //@synthesize allowNonSecureHTTP=_allowNonSecureHTTP - In the implementation block
-(void)parseData:(id)arg1 ;
-(void)loadXMLUIWithData:(id)arg1 baseURL:(id)arg2 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
-(id)URL;
-(void)cancel;
-(void)loadRequest:(id)arg1 ;
-(void)loadXMLUIWithRequest:(id)arg1 ;
-(void)failWithError:(id)arg1 ;
-(bool)allowNonSecureHTTP;
-(void)_finishLoad;
-(bool)anyWebViewLoading;
-(void)webViewFinishedLoading;
-(void)allWebViewsFinishedLoading;
-(void)loadXMLUIWithURL:(id)arg1 ;
-(void)setAllowNonSecureHTTP:(bool)arg1 ;
-(void)didParseData;
@end

