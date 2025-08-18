services:
  - type: web
    name: auto-feed-hub
    env: python
    plan: free
    autoDeploy: true
    buildCommand: ""
    startCommand: python app.py
    envVars:
      - key: PORT
        value: "10000"
      # Optional: add your AdSense client id to turn on ads automatically
      # - key: ADSENSE_CLIENT
      #   value: "ca-pub-xxxxxxxxxxxxxxxx"
