/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleServiceToolkit.framework/AppleServiceToolkit
 */

@interface ASTProfileConnection : NSObject <ASTConnection> {
    <ASTConnectionStatusDelegate> * _delegate;
    id /* block */  _didReceiveResponse;
    long long  _networkDisconnectedRetryCount;
    NSDictionary * _profile;
    NSURLRequest * _request;
    bool  _retryOnNetworkDisconnected;
    unsigned long long  _rootOfTrust;
    NSString * _sessionID;
    long long  _state;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <ASTConnectionStatusDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ didReceiveResponse;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long networkDisconnectedRetryCount;
@property (nonatomic, retain) NSDictionary *profile;
@property (nonatomic, retain) NSURLRequest *request;
@property (nonatomic) bool retryOnNetworkDisconnected;
@property (nonatomic, readonly) unsigned long long rootOfTrust;
@property (nonatomic, retain) NSString *sessionID;
@property (nonatomic) long long state;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)delegate;
- (id /* block */)didReceiveResponse;
- (id)generateRequest;
- (id)initWithProfile:(id)arg1 sessionID:(id)arg2;
- (long long)networkDisconnectedRetryCount;
- (id)profile;
- (id)request;
- (bool)retryOnNetworkDisconnected;
- (unsigned long long)rootOfTrust;
- (id)sessionID;
- (void)setDelegate:(id)arg1;
- (void)setDidReceiveResponse:(id /* block */)arg1;
- (void)setNetworkDisconnectedRetryCount:(long long)arg1;
- (void)setProfile:(id)arg1;
- (void)setRequest:(id)arg1;
- (void)setRetryOnNetworkDisconnected:(bool)arg1;
- (void)setSessionID:(id)arg1;
- (void)setState:(long long)arg1;
- (long long)state;

@end
