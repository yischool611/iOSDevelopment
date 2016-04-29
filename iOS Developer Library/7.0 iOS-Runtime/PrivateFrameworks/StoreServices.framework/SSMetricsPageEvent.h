/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSString;

@interface SSMetricsPageEvent : SSMetricsBaseEvent {
}

@property(getter=isCachedResponse) BOOL cachedResponse;
@property(retain) NSString * navigationType;
@property(retain) NSString * pageHistoryDescription;
@property double pageRenderTime;
@property(retain) NSString * referringAppName;
@property(retain) NSString * referringURL;
@property double requestEndTime;
@property double requestStartTime;
@property double responseEndTime;
@property double responseStartTime;
@property(retain) NSString * searchTerm;
@property(retain) NSString * serverApplicationInstance;
@property(retain) NSString * serverTiming;
@property(getter=isUbered) BOOL ubered;

- (id)description;
- (id)init;
- (BOOL)isCachedResponse;
- (BOOL)isUbered;
- (id)navigationType;
- (id)pageHistoryDescription;
- (double)pageRenderTime;
- (id)referringAppName;
- (id)referringURL;
- (double)requestEndTime;
- (double)requestStartTime;
- (double)responseEndTime;
- (double)responseStartTime;
- (id)searchTerm;
- (id)serverApplicationInstance;
- (id)serverTiming;
- (void)setCachedResponse:(BOOL)arg1;
- (void)setNavigationType:(id)arg1;
- (void)setPageHistoryDescription:(id)arg1;
- (void)setPageHistoryDescriptionWithIdentifiers:(id)arg1;
- (void)setPageRenderTime:(double)arg1;
- (void)setReferringAppName:(id)arg1;
- (void)setReferringURL:(id)arg1;
- (void)setRequestEndTime:(double)arg1;
- (void)setRequestStartTime:(double)arg1;
- (void)setResponseEndTime:(double)arg1;
- (void)setResponseStartTime:(double)arg1;
- (void)setSearchTerm:(id)arg1;
- (void)setServerApplicationInstance:(id)arg1;
- (void)setServerTiming:(id)arg1;
- (void)setUbered:(BOOL)arg1;

@end